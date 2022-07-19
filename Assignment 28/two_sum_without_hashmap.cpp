class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>o;
        for(int i = 0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int c= nums[i]+nums[j];
                if(c==target){
                    o.push_back(i);
                    o.push_back(j);
                    break; 
            }
            
            }
        }
        return o;
    }
};
