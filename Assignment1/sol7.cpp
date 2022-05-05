#include <bits/stdc++.h>
using namespace std; 

int main(){ 
int a[1000],d=0,b=0,c=0; 
double k,l,m,n; 
cin>>n; 
for(int i=0;i<n;i++){ 
cin>>a[i];
 } 
for(int i=0;i<n;i++){ 
    if(a[i]>0){
     d++;
    } 
    else if(a[i]==0){ 
     b++; 
    } 
    else{ 
     c++;
    }
  }
   k=d/n; 
   l=c/n;
   m=b/n;
   
    cout<<fixed<<setprecision(6)<<k<<"\n";
    cout<<fixed<<setprecision(6)<<l<<"\n";
    cout<<fixed<<setprecision(6)<<m<<"\n"; 
}
