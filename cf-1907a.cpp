#include <iostream>
#include <algorithm>
using namespace std;

int main () {
    int t;
    string s;

    cin >> t;
    while (t--) {
        cin >> s;
        char c = s[0];
        int n = s[1] - '0';

        for (int i = 1; i <= 8; i++) {
            if (i != n)
                cout << c << i << '\n';
        }

        for (int i = 97; i <= 104; i++) {
            if (c != i)
                cout << char(i) << n << '\n';
        }
    }

    return 0;
}