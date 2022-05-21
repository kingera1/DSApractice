class Solution {
public:
    vector<int> runningSum(vector<int>& n){
        int a = n.size();
        for(int i = 1; i<a;i++){
            int p = n[i-1];
            n[i] = n[i]+p;
        }
        return n;
    }
    
};
