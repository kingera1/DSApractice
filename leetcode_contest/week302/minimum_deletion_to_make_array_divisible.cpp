class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsD) {
        int g= numsD[0];
        for(int i=0;i<numsD.size();i++){
            g= __gcd(g,numsD[i]);
        }
        sort(begin(nums),end(nums)); 
        for(int i=0; i<nums.size();i++){
            if(nums[i]>g) return -1;
            else if (g%nums[i]==0) return i;
        } 
        return -1;                     
    }
};
