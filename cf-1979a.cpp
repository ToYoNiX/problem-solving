#include <iostream>
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
        ll n;
        cin >> n;

        ll arr[n];
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int ans = __INT_MAX__;
        for (int i = 1; i < n; i++) {
            ll tmp = max(arr[i], arr[i - 1]) - 1;
            if (tmp < ans) {
                ans = tmp;
            }
        }

        cout << ans << '\n';
    }

    return 0;
} 