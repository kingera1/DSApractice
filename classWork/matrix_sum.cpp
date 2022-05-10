#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[2][2], b[2][2], c[2][2];
    int i,j;
    cout<<"Enter the elements of first matrix\n";
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cin>>a[i][j];
        }
}
    cout<<"Enter the elements of second matrix\n";
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cin>>b[i][j];
        }
}
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            c[i][j]= a[i][j]+b[i][j];
        }
            
        }
    for( i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<c[i][j]<<" ";
        
        }
        cout<<endl;
    }
    }
