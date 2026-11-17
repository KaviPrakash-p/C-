#include<iostream>
using namespace std;
int main()
{
    int code1=27;
    int code2=99;
    bool flg=true;
    int array[5]={14,27,31,27,42};
    for(int indexofarray=0;indexofarray<5;indexofarray++)
    {
        if(array[indexofarray]==code1)
        {
            cout<<indexofarray<<" ";
            flg=false;
            break;
        }
       
    }
    if(flg)
    {
        cout<<"Not found";
    }
}