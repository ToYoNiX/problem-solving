#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define pi 3.141592653
#define el '\n'
ll N =  1e9 + 1;
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
        cin >> n;

        ll arr[n];
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cin >> m;
        while (m--) {
            string s;
            cin >> s;

            ll len = s.length();
            if (len != n) {
                cout << "NO\n";
                continue;
            }

            bool symbols_to_numbers = true;
            map <char, ll> ston;
            for (ll i = 0; i < len; i++) {
                if (ston.find(s[i]) == ston.end()) {
                    ston[s[i]] = arr[i];
                    continue;
                }

                if (ston[s[i]] != arr[i]) {
                    symbols_to_numbers = false;
                    break;
                }
            }

            bool numbers_to_symbols = true;
            map <ll, char> ntos;
            for (ll i = 0; i < len; i++) {
                if (ntos.find(arr[i]) == ntos.end()) {
                    ntos[arr[i]] = s[i];
                    continue;
                }

                if (ntos[arr[i]] != s[i]) {
                    numbers_to_symbols = false;
                    break;
                }
            }

            if (symbols_to_numbers && numbers_to_symbols) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}