#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int>A={0,1,0,2,1,0,1,3,2,1,2,1};
	int n= A.size();
	int p = A[n-1];
	for (int i = n-1;i>=0;i--){
		if (A[i]>p){
			p= A[i];
		}
		A[i]= p;
	}
	for(int i = 0; i<n;i++){
		cout<<A[i]<<" ";
	}
	return 0;
}
