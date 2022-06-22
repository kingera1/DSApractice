#include<bits/stdc++.h>
using namespace std
  
void recursion(string X ){
     if (X.size()<3)
       cout<<X<<endl;
     if (X.size()==3) 
    {
        cout<<X<<endl;
        return;
    }
    
    for (char a = 'a';a<'d';a++){
        recursion(X+a);   
    }
}

int main(){
    string a="";
    recursion(a);
}
