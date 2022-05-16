#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    vector<int>a(100,0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m;
        a[m]++;
    }
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[i];j++){
            cout<<i<<" ";
        }
    }
}
