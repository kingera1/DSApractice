class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>m;
        vector<int>o;
        for(int i = 0;i<nums.size();i++){
            int c= target-nums[i];
            if(m.find(c)!=m.end()){
                o.push_back(m[c]);
                o.push_back(i);
                break;
            }
            m[nums[i]]=i;
        }
        return o;
    }
};
