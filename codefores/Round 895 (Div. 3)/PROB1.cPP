#include <iostream>
using namespace std;

int min_moves_to_equalize(int a, int b, int c, int tt)
{
    if (a == b)
    {
        return 0;
    }
    if (a > b)
    {
        tt = a;
        a = b;
        b = tt;  // Swap a and b if necessary so that a <= b
    }

    if (a + c <= b)
    {
        return 1;  // You can fill the smaller vessel completely to equalize
    }
    else
    {
        int moves = 2;  // Initial move to fill the smaller vessel partially
        while (a != b)
        {
            int diff = b - a;
            if (diff >= c)
            {
                a += c;
            }
            else
            {
                a = b;
            }
            moves++;
        }
        return moves;
    }
}

int main()
{
    int t,tt;
    cin >> t;  // Read the number of test cases

    for (int i = 0; i < t; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;  // Read the values of a, b, and c for each test case
        int result = min_moves_to_equalize(a, b, c, tt);
        cout << result << endl;
    }

    return 0;
}
