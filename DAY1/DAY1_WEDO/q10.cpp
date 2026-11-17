#include<iostream>
using namespace std;
int main()
{
    int i1=0;
    int i2=1;
    int sum;
    for(int i=0;i<=10;i++)
    {
        cout<<i1<<" ";
        sum=i1+i2;
        i1=i2;
        i2=sum;
    }
}