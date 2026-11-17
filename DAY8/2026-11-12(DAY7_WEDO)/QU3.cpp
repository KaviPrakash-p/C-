#include <iostream>
using namespace std;

int main() {

    int IDs[6] = {21, 35, 21, 44, 21, 50};
    int targets[2] = {21, 99};
    for (int j = 0; j < 2; j++) {
        int count = 0;
        cout << "Target: " << targets[j] << endl;
        for (int i = 0; i < 6; i++) {

            if (IDs[i] == targets[j]) {

                cout << "Matching index: " << i << endl;

                count++;
            }
        }
        if (count == 0) {
            cout << "Not found" << endl;
        }
        else {
            cout << "Match count: " << count << endl;
        }
        cout << endl;
    }
}