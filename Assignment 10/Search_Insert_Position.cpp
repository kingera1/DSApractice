class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int h = nums.size()-1;
        int l= 0;
        int mid = l+(h-l)/2;
        
        while(l<=h){
            
            if(target<nums[mid])  h=mid-1;
            
            else if(target==nums[mid]) return mid;
            
            else l= mid+1;
            mid = l+(h-l)/2;
            
        }
        return mid;
        
    }
};
