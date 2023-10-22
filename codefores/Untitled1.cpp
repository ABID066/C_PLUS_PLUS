#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // Check if it's possible to find a valid triplet
        if (n < 3 || n % 3 == 0) {
            cout << "NO" << endl;
        } else {
            // Find a valid triplet
            cout << "YES" << endl;

            if (n % 3 == 1) {
                cout << "1 2 " << n - 3 << endl;
            } else {
                cout << "1 2 " << n - 4 << endl;
            }
        }
    }

    return 0;
}
