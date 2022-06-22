#include<bits/stdc++.h>
using namespace std;
void recursion(string X = "", string Y= "abc" ){
     if (X.size()==Y.size()) 
    {
        cout<<X<<endl;
        return;
    }
    
    for (char a:Y){
        recursion(X+a,Y);   
    }
}

int main(){
    string a;
    cin>>a;
    recursion("",a);
}
