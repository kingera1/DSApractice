#include <iostream>
using namespace std;
int main(){
 int prev=0,curr=1,nxt,n;
 cin>>n;
    cout<<prev<<" "<<curr<<" ";
    for(int i=0;i<=n-2;i++){
        nxt=curr+prev;
        prev=curr;
        curr=nxt;
    cout<<curr<<" ";
    }
}
