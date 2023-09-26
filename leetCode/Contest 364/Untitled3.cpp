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
        vector<pair<int, int>> athletes(n);

        for (int i = 0; i < n; i++) {
            cin >> athletes[i].first >> athletes[i].second;
        }

        int minStrength = athletes[0].first;
        int maxEndurance = athletes[0].second;

        for (int i = 1; i < n; i++) {
            minStrength = min(minStrength, athletes[i].first);
            maxEndurance = max(maxEndurance, athletes[i].second);
        }

        if (minStrength > maxEndurance) {
            cout << -1 << endl;
        } else {
            cout << maxEndurance << endl;
        }
    }

    return 0;
}
