#include <bits/stdc++.h> 
using namespace std;

int main(){
    int n,a[100000],maxm=0,j=0; 
    cin>>n; 
    for(int i=0;i<n;i++){ 
    cin>>a[i];
    }
    for(int i=0;i<n;i++){
        maxm=max(maxm,a[i]);
    } 
    for(int i=0;i<n;i++){
       if(a[i]==maxm){ 
          j++; 
        } 
     }
    cout<<j;
}
