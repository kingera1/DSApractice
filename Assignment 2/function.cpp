#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int max_of_four(int a,int b,int c,int d)
 {
     if(a>b&&a>c&&a>d){
        cout<<a<<endl;
        return a;   }
    else if(b>a&&b>c&&b>d){
        cout<<b<<endl;
        return b;
    }
    else if(c>a&&c>b&&c>d){
        cout<<c<<endl;
        return c;
    }
    else{
        cout<<d<<endl;
       return d;
    }
    
 }
int main()
 {
    int a,b,c,d,max_no;
    cin>>a>>b>>c>>d;
    max_no=max_of_four(a,b,c,d);
    return 0; 
 }
