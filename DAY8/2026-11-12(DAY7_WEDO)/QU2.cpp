#include <iostream>
using namespace std;

int main() {

    int scores[5] = {55, 72, 68, 91, 83};
    int testIndex[2] = {2, 5};
    int newScore[2] = {76, 60};
    for (int j = 0; j < 2; j++) {

        int updated[5] = {55, 72, 68, 91, 83};
        int index = testIndex[j];
        if (index >= 0 && index < 5) {

            updated[index] = newScore[j];

            cout << "Updated array: ";

            for (int i = 0; i < 5; i++) {
                cout << updated[i] << " ";
            }

            cout << endl;
        }
        else {
            cout << "Invalid index";
        }
    }

    return 0;
}