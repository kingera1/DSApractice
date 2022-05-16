#include <bits/stdc++.h>
using namespace std;
void insertion2(vector<int>a){
    for(int i=1;i<a.size();i++){
        int j=i-1;
        int key=a[i];
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
        for(int j=0;j<a.size();j++){
            cout<<a[j]<<" ";
            
        }
        cout<<"\n";
    }
}

int main(){
    int n,e;
    vector<int>a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>e;
        a.push_back(e);
    }
    insertion2(a);    
}
