#include <iostream>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--) {
        int x, y, total = 0;
        cin >> x >> y;

        total = y / 2;

        int c = y / 2;
        while (c--) {
            x -= 7;
        }

        if (y % 2 == 1) {
            x -= 11;
            total += 1;
        }

        x = max (x, 0);
        total += (x % 15 != 0 ? (x / 15) + 1 : x / 15);
        cout << total << '\n';
    }
}