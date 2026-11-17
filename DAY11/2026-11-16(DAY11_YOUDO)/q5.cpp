#include <iostream>
using namespace std;

// Function declaration
double areaOfTriangle(double base, double height);

int main()
{
    double base, height, area;

    cout << "Enter base and height: ";
    cin >> base >> height;
    // Function call
    area = areaOfTriangle(base, height);

    cout << "Area of triangle = " << area;
   return 0;
}
double areaOfTriangle(double base, double height)
{
    return 0.5 * base * height;
}