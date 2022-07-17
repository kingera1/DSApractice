class Solution {
public:
    vector<vector<int>> a;
    bool cSwap(vector<int>& nums,int start,int curr){
        for(int i=start; i<curr; i++)
            if(nums[curr] == nums[i])
                return false;
        return true;
    }
    void pmt(vector<int>& nums,int l,int r){
        if(l == r){
            a.push_back(nums);
        }
        else{
            for(int i=l; i<=r; i++){
            if(cSwap(nums,l,i)){
                swap(nums[l],nums[i]);
                pmt(nums,l+1,r);
                swap(nums[l],nums[i]);
            }
            }
        }
        
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n = nums.size()-1;
        pmt(nums,0,n);
        return a;
    }
};
