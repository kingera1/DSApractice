#include<bits/stdc++.h>
using namespace std;

bool isTargetPresent(vector<int>A, int target){
    for(int i=0;i<A.size();i++){
        if(A[i]==target) return true;
    }
    return false;
}

bool isTargetPresentIn2DVector(vector<vector<int> >A, int target){
    for(int i=0;i<A.size();i++){
    	for(int j=0;j<A[i].size();j++)
            if(target==j) return true;
    }
    return false;
}

bool isTragetPresentInRow(vector<vector<int>>A, int target, int r){
    for(int i=0;i<A[r].size();i++){
        if(A[r][i]==target) return true;
    }
    return false;
}

bool isTragetPresentInCol(vector<vector<int>>A, int target, int c){
    for(int i=0;i<A.size();i++){
        if(A[i][c]==target)return true;
    }
    return false;
}
int main() {
    int target;
    cin >>target;
    vector<int>B={4,2,3};
    vector<vector<int>>A={{4,2,3},{1,5,6},{9,8,7}};
    
    if(isTargetPresent(B,target))
        cout<<"Present in 1D array"<<endl;
   
    if(isTragetPresentInCol(A,target,2))
        cout<<"present in 2D array column"<<endl;

    if(isTragetPresentInRow(A,target,2))
        cout<<"present in 2D array row"<<endl;

    if(isTargetPresentIn2DVector(A,target))
         cout<<"present in 2D array"<<endl;
}
