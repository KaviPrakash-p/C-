#include<iostream>
using namespace std;
int main()
{
    int num=39;
   
    int round=0;
    while(num>=10)
    {
        int temp=num;
        int product=1;
        while(temp>0)
        {
            product=product*temp%10;
            temp=temp/10;
        }
        num=product;
        round++;

    }
    cout<<num<<" "<<endl;
    cout<<"round "<<round;
}