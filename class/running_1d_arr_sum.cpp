#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a;
    vector<int> v;
    for(int i=0 ; i<n ; i++){
        cin>>a;
        v.push_back(a);
    }
     for (int i =0; i<n;i++){
		int p = v[i-1];
		v[i]= v[i]+p;
		cout<<v[i]<<" ";
	}
    cout<<endl;
    
}
