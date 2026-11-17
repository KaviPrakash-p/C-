#include<iostream>
using namespace std;
int main()
{
    float n;
    cin>>n;
    float sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    float avg=sum/n;
    cout<<"the avg is "<<avg;
}