#include <iostream>
using namespace std;

int main () {
    int t, a, b;
    string s;

    cin >> t;
    while (t--) {
        cin >> s;

        a = 0, b = 0;
        for (int i = 0; i < 5; i++) {
            if (s[i] == 'A')
                a++;
            else
                b++;
        }

        cout << (a > b ? 'A' : 'B') << '\n';
    }
}
