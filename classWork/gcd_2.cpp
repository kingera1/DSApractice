#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
   if (b>a) swap(a,b);
   if (a%b==0){
    return b;
    }
    return gcd(a%b,b);
}

int main() {
   int c,d;
   cin>>c>>d;
   int x =gcd(c,d);
   cout<<x;
}
