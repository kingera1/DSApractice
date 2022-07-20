class Solution {
public:
    int countPairs(vector<int>& del) {
        int mod = 1e9 +7;
        unordered_map<int,int>s;
        int count=0;
        for(int i=0;i<del.size();i++){
            for(int j=0;j<22;j++){
                int p =1<<j;
                if(s.find(p-del[i])!=s.end()){
                    count+=s[p-del[i]];
                    count=count%mod;
                }
            }
            s[del[i]]++;
        }  
        return count;
    }
};
