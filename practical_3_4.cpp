#include<iostream>
using namespace std;
void print(int a)
{
    cout<<"i am integer:"<<a<<endl;
}
void print(double f)
{
    cout<<" i am float:"<<f<<endl;
}
void print(char ch)
{
    cout<<"i am character:"<<ch<<endl;
}
int main()
{
    print(20);
    print(23.23);
    print('h');

}