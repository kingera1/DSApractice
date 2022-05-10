#include<bits/stdc++.h>
using namespace std;

int main() {
    int row, col;
    cin>>row>>col;
    vector<vector<int>> v;
    for (int i = 0; i < row; i++) {  
        vector<int> tempV; 
        for (int j = 0; j < col; j++) { 
            tempV.push_back(0); 
        } 
        v.push_back(tempV); 
    }
    
    for (int i = 0; i < v.size(); i++) { 
        for (int j = 0; j < v[i].size(); j++) 
            cout << v[i][j] << " "; 
        cout << endl; 
    } 
    return 0;
}
