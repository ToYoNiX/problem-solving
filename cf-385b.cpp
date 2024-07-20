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

    string s;
    cin >> s;

    int len = s.length(), ans = 0, lastBearIdx = 0;
    for (int i = 0; i < len; i++) {
        if (s[i] == 'b') {
            if (i + 3 < len && s.substr(i, 4) == "bear") {
                ans += ((i + 1 - lastBearIdx) * (len - (i + 3)));
                lastBearIdx = i + 1;
            }
        }
    }

    cout << ans << '\n';
    return 0;
}