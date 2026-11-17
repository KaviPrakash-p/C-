#include <iostream>
#include <cmath>
using namespace std;

// Function declaration
int tablesNeeded(int students);

int main()
{
    int students, tables;

    cout << "Enter number of students: ";
    cin >> students;

    // User-defined function call
    tables = tablesNeeded(students);

    cout << "Number of tables = " << tables;

    return 0;
}

// Function definition
int tablesNeeded(int students)
{
    // Library function call
    return ceil(students / 4.0);
}