
#include <iostream>
using namespace std;

int main() {

    int rows = 3;
    int cols = 4;
    int sum = 0;
    int maximum = 0;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            int value = i * j;
            cout << value << " ";
            sum = sum + value;
            if (value > maximum) {
                maximum = value;
            }
        }
        cout << endl;
    }
    cout << "Sum = " << sum << endl;
    cout << "Maximum = " << maximum;

    return 0;
}
