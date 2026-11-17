#include<iostream>
using namespace std;

int pod(int num)
{
    int product=1;
    while(num>0)
    {
        int digit=num%10;
        product=product*digit;
        num=num/10;
    }
    return product;
}
int main()
{
    int n;
    cin >> n;
    int rounds = 0; 
    while(n>=10)
    {
        n = pod(n);
        rounds++;
    }
    cout << "Final digit " << n << ", rounds " << rounds;
}