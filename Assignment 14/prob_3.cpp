#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string a = to_string(n);
    int k = a.size();
    for (int i = 0;i<=k;i++){
         int b = n%10;
         n = n/10;
        for (int j = 1;j<=b;j++){
            cout<<"#";
        }         
     cout<<endl;
    }
}

