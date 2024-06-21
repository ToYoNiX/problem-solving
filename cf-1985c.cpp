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

        ll sum = 0, ans = 0, _max = 0;
        for (ll i = 0; i < n; i++) {
            sum += arr[i];
            _max = max(_max, arr[i]);

            if (sum - _max == _max) {
                ans++;
            }
        }

        cout << ans << '\n';
    }
}