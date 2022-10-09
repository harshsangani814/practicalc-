#include<iostream>
using namespace std;
int &zerosmaller(int &x,int &y)
{
    if(x<y)
    //{
    return x;
    //}
    else
    //{
    return y;
    //}
}
int main()
{
    int x,y;
    cout<<"enter two value";
    cin>>x>>y;
    zerosmaller(x,y)=0;
    cout<<"enter new value:"<<x<<"  " <<y;
    return 0;
}