#include<bits/stdc++.h>
using namespace std; 
#define int long long

vector<int>A;
int arithmetic(int a, int d, int n){
    for (int i=0;i<n;i++){
      int z = a + (i)*d ;
      A.push_back(z);
      
      cout<<A[i]<<" ";
    }
    return 0;
}

signed main() {
    int p, q, r;
    cin>>p;
    cin>>q;
    cin>>r;
    arithmetic(p,q,r);
    return 0;
}
