#include<bits/stdc++.h>
using namespace std; 
#define int long long

vector<int>A;
int geometric(int a, int d, int n){
    A.push_back(a);
    for (int i=0;i<=n;i++){
      int z = a*d ;
      A.push_back(z);
        a = z;
      
      cout<<A[i]<<" ";
    }
    return 0;
}

signed main() {
    int p, q, r;
    cin>>p;
    cin>>q;
    cin>>r;
    geometric(p,q,r);
    return 0;
}
