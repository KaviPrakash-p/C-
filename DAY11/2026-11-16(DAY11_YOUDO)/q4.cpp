#include <iostream>
using namespace std;
int sum(int first, int second);
int main()
{
    int a, b, result;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    result = sum(a, b);
    cout << "Sum = " << result;
    return 0;
}
int sum(int first, int second)
{
    return first + second;
}