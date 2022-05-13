#include<bits/stdc++.h>
using namespace std;

//spaceComplexity O(1)
//Time Complexity O(n^2) => //in average case O(nlogn) 


void printVector(vector<int>A){
    for(int a:A) cout<<a<<" ";
    cout<<"\n";
}

vector<int>insertionSortMethod1(vector<int>A){
    cout<<"insertionSortMethod1: \n";
    for(int i=1;i<A.size();i++){\
        cout<<"i: "<<i<<":  \n";
        for(int j=i;j>0;j--){
            cout<<"j: "<<j<<" A[j]: "<<A[j]<<"\n";
            cout<<"j-1: "<<j-1<<" A[j-1]: "<<A[j-1]<<"\n";
            if(A[j]<A[j-1]){
                swap(A[j],A[j-1]);
            }
            else break;
        }
        printVector(A);
    }
    return A;
}

void insertionSortMethod2(vector<int>&A){
    cout<<"insertionSortMethod2: ";
    for(int i=1;i<A.size();i++){
        int j=i-1;
        int key=A[i];
        cout<<"i: "<<i<<" j: "<<j<<"\n";
        while(j>=0 && A[j]>key){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;
        printVector(A);
    }
}

int main() {
    vector<int>A = {5,4,3,6,3,4,7};
    cout<<"Array To Sort: ";
    printVector(A);
    //vector<int>B= insertionSortMethod1(A);
    //printVector(B);
    insertionSortMethod2(A);
    cout<<"Sorted Array : ";
    printVector(A);
}
