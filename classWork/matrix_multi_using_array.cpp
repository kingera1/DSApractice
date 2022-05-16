#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3][3],b[3][3],c[3][3]={0};
    int i,j,k;
    cout<<"Enter the element of first Matrix "<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }    
    cout<<"Enter the element of second Matrix "<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
    }
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           for(k=0;k<3;k++)
           {
               c[i][j]= c[i][j] + a[i][k]*b[k][j];
           }
       }
    
   }
    cout<<"multiplication of two matrix "<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<c[i][j]<<"  ";
        }
        cout<<endl;
    }
return 0;
}
