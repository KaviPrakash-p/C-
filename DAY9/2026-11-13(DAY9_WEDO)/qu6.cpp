
#include <iostream>
using namespace std;

int main()
{
    int attendance[5] = {28, 31, 26, 30, 29};
    int repla;
    cin >> repla;
    attendance[2]=repla;
    for(int i = 0; i < 5; i++)
    {
        cout<<attendance[i]<<" ";
    }
}
