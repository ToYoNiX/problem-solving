#include <iostream>
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
        int n, k, ans = 0;
        string s;
        cin >> n >> k >> s;

        k--;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'B') {
                ans++;
                i += k;
            }
        }

        cout << ans << '\n';
    }
}