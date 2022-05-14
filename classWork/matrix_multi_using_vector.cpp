#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>matrix_multi(vector<vector<int>>m1, vector<vector<int>>m2){
     int mr1 = m1.size(), mc1 = m1[0].size(), mr2 = m2.size(), mc2 = m2[0].size();
     vector<int>A(mc2);
     vector<vector<int>>m3(mr1, A);
       for (int i = 0;i<mr1;i++){
           for (int j=0;j<mc2;j++){
               for (int k=0;k<mc1;k++){
                   m3[i][j] = m3[i][j] + m1[i][k]*m2[k][j];
               }
               }         
        }
    return m3;
}

int main(){
   int mr1,mc1,mr2,mc2;
   cin>>mr1>>mc1>>mr2>>mc2;
    vector<int>A(mc1);
    vector<vector<int>>m1(mr1,A);
    vector<int>B(mc2);
    vector<vector<int>>m2(mr2,B);
    for (int i = 0;i<mr1;i++){
           for (int j=0;j<mc1;j++)
               cin>>m1[i][j];
        }
      for (int i = 0;i<mr2;i++){
           for (int j=0;j<mc2;j++)
               cin>>m2[i][j];
        }
    if (mc1==mr2){
       vector<vector<int>>m3 = matrix_multi(m1 , m2);
         for (int i = 0;i<mr1;i++){
           for (int j=0;j<mc2;j++)
               cout<<m3[i][j]<<" ";
         cout<<endl;
        }
    }
    else {
        cout<<"matrix multiplication not possible";
    }  
}
