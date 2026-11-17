#include <iostream>
using namespace std;

int main()
{
    int number = 6083;
    int digit;
    int count = 0;
    do
    {
        digit = number % 10;
        if(digit % 2 == 0)
        {
            count++;
        }
        number = number / 10;
    } while(number > 0);
    cout << "Even digits = " << count;
}
