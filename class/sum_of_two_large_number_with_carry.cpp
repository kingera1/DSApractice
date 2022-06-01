#include <bits/stdc++.h>
using namespace std;
 
string add(string a, string b){
    string num = "0123456789";
	string sum = "";
    int i = a.size() -1;
    int j = b.size() -1;     
    int y =0;
    while(i>=0 && j>=0){
        int s = (a[i] - '0') + (b[j] - '0') + y;
        int z = s%10;
        y = s/10;
        sum = sum + num[z]; 
       i--;
       j--;
    }
    while(i>=0 ){
        int s = (a[i]-'0')+y;
        int z = s%10;
        sum = sum+num[z];
        y = s/10;
          i--;
       } 
    while( j>=0){
        int s = (b[j]-'0')+y;
        int z = s%10;
        sum = sum+num[z];
        y = s/10;
          j--;
       } 
    if(y>0){
        sum= sum + num[y];
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
