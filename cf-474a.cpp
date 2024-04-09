#include <iostream>
using namespace std;

int main () {
    string chars = "qwertyuiopasdfghjkl;zxcvbnm,./";

    char c;
    string s, ans = "";
    cin >> c >> s;
    int len = s.size();

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < 30; j++) {
            if (s[i] == chars[j])
                if (c == 'R')
                    ans += chars[j - 1];
                else
                    ans += chars[j + 1];
        }
    }

    cout << ans << '\n';
}
