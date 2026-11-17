#include <iostream>
using namespace std;
int readTeamSize();
int main()
{
    int size;
    size = readTeamSize();

    cout << "Team size = " << size;

    return 0;
}

int readTeamSize()
{
    int size=5;

    // cout << "Enter team size: ";
    // cin >> size;

    return size;
}