#include<iostream>
using namespace std;
int main()
{
    int length=48;
    int width=18;
    int rem;
    while (width!=0)
    {
        rem=length%width;
        length=width;
        width=rem;
    }
    cout<<length;
    
}