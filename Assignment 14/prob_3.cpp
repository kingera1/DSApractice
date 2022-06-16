#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int s = n%10;
    for (int i = 0;i<=s;i++){
         int s = n%10;
         n = n/10;
        for (int j = 1;j<=s;j++){
            cout<<"#";
        }         
     cout<<endl;
    }
}
