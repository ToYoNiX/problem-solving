#include <iostream>
#include <queue>
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
    ll t;
    cin >> t;

    while (t--) {
        ll n, m;
        cin >> n >> m;

        ll arr[n][m];
        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }

        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < m; j++) {
                priority_queue <ll> pq;

                if (i != 0) {
                    pq.push(arr[i - 1][j]);
                }

                if (j != 0) {
                    pq.push(arr[i][j - 1]);
                }

                if (i < n - 1) {
                    pq.push(arr[i + 1][j]);
                }

                if (j < m - 1) {
                    pq.push(arr[i][j + 1]);
                }

                if (arr[i][j] > pq.top()) {
                    arr[i][j] = pq.top();
                }
            }
        }

        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < m; j++) {
                cout << arr[i][j] << ' ';
            }
            cout << '\n';
        }
    }
    

    return 0;
}