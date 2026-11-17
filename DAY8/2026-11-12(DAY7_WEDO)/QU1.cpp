#include<iostream>
using namespace std;
int main()
{
    int array[6]={12,9,15,8,17,11};
    cout<<array[0]<<" ";
    cout<<array[5]<<endl;
    for(int i=6-1;i>=0;i--)
    {
        cout<<array[i]<<" ";
    }
}