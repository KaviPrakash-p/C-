#include<iostream>
using namespace std;
int main()
{
    int array[6]={41,72,15,72,60,92};
    int index= -1;
    int target;
    cin>>target;
    for(int i=0;i<6;i++)
    {
        if(array[i]==target)
        {
            index=i;
            break;
        }
    }
    cout<<index;
}