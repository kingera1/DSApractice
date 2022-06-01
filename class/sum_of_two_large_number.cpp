#include <bits/stdc++.h>
using namespace std;
 
string add(string a, string b){
    string num = "0123456789";
	string sum = "";
    int i = a.size() -1;
    int j = b.size() -1;      
    while(i>=0 && j>=0){
        int s = (a[i] - '0') + (b[j] - '0');
        sum = sum + num[s]; 
       i--;
       j--;
    }
    while(i>=0 ){
          sum = sum +a[i] ;
          i--;
       } 
    while( j>=0){
          sum = sum + b[j] ;
          j--;
       } 
    reverse(sum.begin(),sum.end());
    cout<<sum<<" ";                          
    return sum;
}

int main(){
    string a, b;
    cin>>a>>b;
    add(a,b);
}
