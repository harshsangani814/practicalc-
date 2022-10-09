#include<iostream>
using namespace std;
void add(int r=2,int c=2)
{
    int A[r][c],B[r][c],i,j;
    cout<<"enter first matrics";
   for(i=0;i<2;i++)
    {
        
        for(j=0;j<2;j++)
         {
            cin>>A[i][j];
         }
            
    }
    cout<<"enter second matrics";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>B[i][j];
        }
    }
    cout<<"add first and second matrics";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<A[i][j]+B[i][j]<<endl;
        }
    }
}
int main()
    {
        add();
        return 0;
    }
