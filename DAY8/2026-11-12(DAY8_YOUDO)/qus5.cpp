#include<iostream>
using namespace std;
int main()
{
    int array1[4]={10,20,30,15};
    array1[3]=30; 
    array1[2]=20; 
    array1[1]=15;
    for(int indexofarray=0;indexofarray<4;indexofarray++)
    {
        cout<<array1[indexofarray]<<" ";
    } 
}
