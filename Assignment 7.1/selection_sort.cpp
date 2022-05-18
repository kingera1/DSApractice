class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int key;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size()-1;j++)
            if(nums[j+1]<nums[i]){
                 key=nums[i];
                 nums[i]=nums[j+1];
                 nums[j+1]=key;                
            }
            
        }
        return nums;
    }
};
