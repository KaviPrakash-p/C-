
#include<iostream>
using namespace std;

int readChoice()
{
    int choice;
    cin >> choice;
    while(choice != 1 && choice != 2)
    {
        cout << "Enter 1 or 2: ";
        cin >> choice;
    }
    return choice;
}

int main()
{
    int result = readChoice();
    cout << result;
}
