class Solution {
public:
    void pmt(vector<vector<int>>&a,vector<int>&nums,int l,int r){
        if(l==r)
            a.push_back(nums);
        else{
            for(int i=l;i<=r;i++){
                swap(nums[i],nums[l]);
                pmt(a,nums,l+1,r);
                swap(nums[i],nums[l]);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>a;
        int n=nums.size();
        pmt(a,nums,0,n-1);
        return a;
    }
};
