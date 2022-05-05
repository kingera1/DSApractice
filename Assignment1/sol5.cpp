#include<bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin>>n;
   int p;
   vector<int>A;
   for(int i=0;i<n;i++)
   {
   cin>>p;
   A.push_back(p);
   }
   int sum = 0;
   for (int i=0;i<n;i++)
   {
     sum = sum + A[i];
   }
   cout<<sum;
}
