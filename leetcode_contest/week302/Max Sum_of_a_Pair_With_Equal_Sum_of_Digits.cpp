class Solution {
public:
    int getSum(int n){
        int sum=0;
        string s=to_string(n);
        for(int i=0;i<s.length();i++){
            sum+=s[i]-'0';
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        
        vector<int> v(1000,-1);
        for(int i=0;i<n;i++){
            int a=getSum(nums[i]);
            if(v[a]!=-1){
                maxi=max(maxi,nums[i]+v[a]);
            }
            v[a]=max(v[a],nums[i]);
        }
        if(maxi==INT_MIN)return -1;
        return maxi;
    }
};
