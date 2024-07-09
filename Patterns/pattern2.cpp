#include <iostream>
#include <string>

using namespace std;

void nStarDiamond(int n) {
    // Upper half of the diamond
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        cout << string(n - i - 1, ' ');

        // Print stars in an increasing pattern
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << '*';
        }

        // Move to the next line
        cout << endl;
    }

    // Lower half of the diamond
    for (int k = n - 2; k >= 0; k--) {  // Change k = n - 1 to k = n - 2
        // Print leading spaces
        cout << string(n - k - 1, ' ');

        // Print stars in a decreasing pattern
        for (int l = 0; l < 2 * k + 1; l++) {  // Change l <= (2 * l) to l < 2 * k + 1
            cout << '*';
        }

        // Move to the next line
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    nStarDiamond(n);

    return 0;
}
