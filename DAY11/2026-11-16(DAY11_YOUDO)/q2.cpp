
#include<iostream>
using namespace std;
int sumDigits(int number)
{
    int sum = 0;

    while(number > 0)
    {
        int digit = number % 10;
        sum = sum + digit;
        number = number / 10;
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;

    cout << sumDigits(n);

    return 0;
}
