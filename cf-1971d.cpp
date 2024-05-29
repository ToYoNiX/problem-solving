#include <iostream>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--) {
        string s, r = "";
        cin >> s;

        int len = s.length();
        for (int i = 1; i < len + 1; i++) {
            if (s[i] != s[i - 1])
                r += s[i - 1];
        }

        len = r.length();

        int count = 1, sec = 0;
        for (int i = 1; i < len; i++) {
            if (r[i] != r[i - 1]) {
                count++;
            }

            if (r[i] == '1' && r[i - 1] == '0') {
                sec = 1;
            }
        }

        cout << count - sec << '\n';
    }
}