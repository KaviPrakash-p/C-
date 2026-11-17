#include <iostream>
using namespace std;
int main()
{
    int balance = 85;
    int limit = 20;
    int visits = 0;
    int payment;

    while(balance > 0)
    {
        if(balance >= limit)
        {
            payment = limit;
        }
        else
        {
            payment = balance;
        }
        cout << payment << endl;
        balance = balance - payment;
        visits++;
    }
    cout << "Visits = " << visits;
}
