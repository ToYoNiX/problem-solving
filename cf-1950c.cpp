#include <iostream>
using namespace std;

void fastio(){
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main () {
    fastio();
    int t;
    cin >> t;

    while (t--) {
        string s, a;
        cin >> s;

        int h, m;

        h = (s[0] - '0') * 10 + (s[1] - '0');

        if (h < 12) {
            if (h == 0)
                h = 12;
            a = "AM";
        }
        else if (h == 12)
            a = "PM";
        else {
            h -= 12;
            a = "PM";
        }

        if (h < 10)
            cout << 0 << h;
        else
            cout << h;

        cout << ':' << s[3] << s[4] << ' ' << a << '\n';
    }
}