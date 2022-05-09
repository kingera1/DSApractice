#include<bits/stdc++.h>
using namespace std;
 
vector<int> mergee(vector<int>A,vector<int>B)
{  
    vector<int> arr3;
    int i = 0, j = 0;
    while(i<A.size() && j<B.size())
    {
        if(A[i] < B[j])
        {
            arr3.push_back(A[i]);
            i++;
        }
        else
        {
            arr3.push_back(B[j]);
            j++;
        }
    }
    while(i<A.size())
    {
        arr3.push_back(A[i]);
        i++;
    }
    while(j<B.size())
    {
        arr3.push_back(B[j]);
        j++;
    }
    return arr3;
}
int main()
{
    vector<int> A = {5, 6, 7, 8};
    vector<int> B = {1, 2, 3,9};
    vector<int> arr3= {mergee(A,B)};    
    for(int i=0;i<arr3.size();i++)
    {
        cout << arr3[i] << endl;
    }
    return 0;
}
