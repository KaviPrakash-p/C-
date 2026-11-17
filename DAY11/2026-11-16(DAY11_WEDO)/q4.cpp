#include<iostream>
using namespace std;
double triangleArea(double base,double height)
{
    return 0.5*(base*height);
}
int main()
{
    int base1;
    int height1;
    cout<<"Enter the base "<<endl;
    cin>>base1;
    cout<<"Enter the height "<<endl;
    cin>>height1;
    double area=triangleArea(base1,height1);
    cout<<area;

}