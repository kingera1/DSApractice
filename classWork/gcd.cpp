#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
   if (b>a) swap(a,b);
   int r = a%b;
    while (r!=0){
       a = b; 
       b = r;
       r = a%b;
    }
    return b;
}

int main() {
   int c,d;
   cin>>c>>d;
   int x =gcd(c,d);
   cout<<x;
}
