
#include <iostream>
using namespace std;
int main()
{
    int array[6] = {41, 72, 15, 72, 60, 72};
    int target;
    cin >> target;
    cout<<"Indices: ";
    int count = 0;
    for(int i = 0; i < 6; i++)
    {
        if(array[i] == target)
        {
            cout << i << " ";
            count++;
        }
    }
    if(count == 0)
    {
        cout << "No matches. ";
    }
    cout << "Count " << count;
}
