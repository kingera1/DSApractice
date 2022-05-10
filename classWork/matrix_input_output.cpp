#include<iostream>

using namespace std;

int main()
{
    int row_size,col_size;
    cin>>row_size;
    cin>>col_size;
    int matrix[row_size][col_size];
    int i,j;
    cout<<"Enter the Matrix Element:"<<endl;
    for(i=0;i<row_size;i++)
    {
        for(j=0;j<col_size;j++)
        {
            cin>>matrix[i][j];
        }
    }
    cout<<"Given Matrix is:"<<endl;
    for(i=0;i<row_size;i++)
    {
        for(j=0;j<col_size;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
