class Solution {
public:
    bool check(vector<int> & arr, int k, int mid){ 
        int count=0;        
        for(int i=0; i<arr.size();i++){            
            if(arr[i]>=mid){
                count++;
            }
        }
        if(count>=k){
           return true; 
        }
        else{
            return false;
        }
    }
      int findKthLargest(vector<int>& nums, int k) {
        
        
        int ans=0;
        int l=-1e4;
        int h=1e4;
        
        while(l<=h){
            
            int mid= (l+h)/2;
            if(check(nums, k, mid)==true){
                ans=mid;
                l=mid+1;
            }else{
                h=mid-1;
            }
        }
        
        return ans;
        
    }
};
