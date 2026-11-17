#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int oddSum = 0;
    int evenCount = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            oddSum = oddSum + (i * i);
        }
        else {

            evenCount++;
        }
    }
    cout << "Odd sum = " << oddSum << endl;
    cout << "Even = " << evenCount;
    return 0;
}
