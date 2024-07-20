#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void fastio () {
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
        ll a, b, c, ans = 0;
        cin >> a >> b >> c;

        ans += a;

        ans += b / 3;
        b %= 3;

        if (b != 0 && b + c < 3) {
            cout << "-1\n";
            continue;
        } else {
            c += b;
            ans += c / 3;
            if (c % 3 != 0) {
                ans++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}