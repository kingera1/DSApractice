#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin>>a;
    cin>>b;
    int d = a.size();
    int e = b.size();
    cout<<d<<" "<<e<<endl;
    string c = a+b;
    cout<<c<<endl;
    char x= a[0];
    char y= b[0];
    a[0] = y;
    b[0] = x;
    cout<<a<<" "<<b;
}
