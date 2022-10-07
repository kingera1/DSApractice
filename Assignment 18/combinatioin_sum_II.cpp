class Solution {
public:    
    vector<int> temp;
    vector<vector<int>> ans;
    void sum(vector<int> cd, int a,int n){
         
        if(a<0) return; 
        if(a==0){
            ans.push_back(temp);
            return;
        }
        for(int i=n;i<cd.size();i++){         
            if(i  > n && cd[i] == cd[i-1])
                continue;
            
            temp.push_back(cd[i]);
            sum(cd,a-cd[i],i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        sum(candidates,target,0);
        return ans;
    }
};
