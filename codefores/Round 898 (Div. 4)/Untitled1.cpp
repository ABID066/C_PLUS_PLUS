#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> digits(n);

        for (int i = 0; i < n; i++) {
            cin >> digits[i];
        }

        int min_digit = 9;
        long long product = 1;

        for (int i = 0; i < n; i++) {
            if (digits[i] == 0) {
                cout << "0" << endl;
                break;
            }
            min_digit = min(min_digit, digits[i]);
            product *= digits[i];
        }

        if (min_digit != 0) {
            // Find the rightmost occurrence of min_digit and increment it by 1
            for (int i = n - 1; i >= 0; i--) {
                if (digits[i] == min_digit) {
                    digits[i]++;
                    break;
                }
            }
            // Recalculate the product with the updated digit
            long long new_product = 1;
            for (int i = 0; i < n; i++) {
                new_product *= digits[i];
            }
            cout << new_product << endl;
        }
    }

    return 0;
}
