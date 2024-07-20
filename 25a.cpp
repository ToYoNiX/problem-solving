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

    ll n, a, lastEven = 0, lastOdd = 0, evens = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a;

        if (a % 2 == 0) {
            evens++;
            lastEven = i + 1;
        } else {
            evens--;
            lastOdd = i + 1;
        }
    }

    if (evens > 0) {
        cout << lastOdd << '\n';
    } else {
        cout << lastEven << '\n';
    }

    return 0;
}