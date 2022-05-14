class Solution {
public:
    vector<int>getprime(int n){
        vector<int>factors;
        for(int i=2;i<=n;i++){
            while(n%i==0){
                factors.push_back(i);
                n=n/i;
            }
        }
        return factors;
    }
    
    int minSteps(int n) {
        int sum=0;
        vector<int>allfactors=getprime(n);
        for(int i=0;i<allfactors.size();i++){
            sum=sum+allfactors[i];
        }
return sum;
    }
    
};
