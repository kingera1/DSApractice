#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--) {
    int n;
    cin>>n;

    int a = n%5;
    if(n<38) cout<<n<<endl;
    else if(a==3||a==4){
        n = n - a + 5;
        cout<<n<<endl;
    }else if(a==8 || a==9) {
        n = n - a + 5;
        cout<<n<<endl;
    }
    else cout<<n<<endl;
}

return 0;

}
