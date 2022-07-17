class Solution {
public:
    void cal(vector<int>&nums,vector<vector<int>> &a,vector<int> &v,int i){
        if(i==nums.size()){
            a.push_back(v); 
            return;
        }
        v.push_back(nums[i]);
        cal(nums,a,v,i+1); 
        v.pop_back(); 
        cal(nums,a,v,i+1); 
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> a;
        vector<int> v;
        cal(nums,a,v,0);
        return a;
    }
};
