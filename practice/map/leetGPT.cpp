#include <bits/stdc++.h>
using namespace std;

class leet {
public:
    int check(vector<int> v) {
        // Implement your logic to check the vector here
        // You can access the elements of 'v' using v[index]
        // and perform your desired operations
        // For example, you can iterate through the vector and print its elements
        for (int i = 0; i < v.size(); ++i) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    leet obj; // Create an instance of the 'leet' class
    vector<int> input_vector = {3, 3, 1, 3, 1, 2, 1, 11, 11, 11, 99, 99, 99};
    obj.check(input_vector); // Call the 'check' function with the input vector
    return 0; // Return 0 to indicate successful execution
}

