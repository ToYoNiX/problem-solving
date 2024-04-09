#include <iostream>
#include <map>
#define ll long long
using namespace std;

int main () {
    ll t;
    cin >> t;

    while (t--) {
        ll n, c, d;
        cin >> n >> c >> d;

        map <ll, int> numbers;

        for (ll i = 0; i < n * n; i++) {
            ll a;
            cin >> a;
            numbers[a]++;
        }

        ll progressive[n][n];

        progressive[0][0] = numbers.begin()->first;

        for (int i = 1; i < n; i++) {
            progressive[i][0] = progressive[i - 1][0] + c;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 1; j < n; j++) {
                progressive[i][j] = progressive[i][j - 1] + d;
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                numbers[progressive[i][j]]--;
            }
        }


        bool isOk = true;
        for (auto i : numbers)
            if (i.second != 0) {
                isOk = false;
                break;
            }
        
        if (isOk)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
