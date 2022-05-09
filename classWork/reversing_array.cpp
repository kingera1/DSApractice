#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int>A;
  int p,n;
  cin>>n;
  for (int i =0;i<n;i++){
    cin>>p;
    A.push_back(p);
  }
    for (int j=0;j<n/2;j++){
     swap(A[j],A[n-1-j]);
  }
  for (int i=0;i<n;i++){
    cout<<A[i]<<" ";
  }
}
