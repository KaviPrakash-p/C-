#include <iostream>
using namespace std;
int main()
{
    int number = 39;
    int rounds = 0;
    while(number >= 10)
    {
        int remaining = number;
        int product = 1;
        while(remaining > 0)
        {
            int digit = remaining % 10;
            product = product * digit;
            remaining = remaining / 10;
        }
        number = product;
        rounds++;
    }
    cout << "Final digit = " << number << endl;
    cout << "Rounds = " << rounds << endl;
}
