#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>A(n);
    int count=0;
    for (int i =0;i<n;i++){
        cin>>A[i];
    }
    for (int i=1;i<n;i++){
        if(A[i]<A[i-1]){
           for (int j=i;j>0;j--){
              if (A[j]<A[j-1]) {
                  swap(A[j],A[j-1]);
                  count++;
              }
          }
        }
    }
    cout<<count;
}
