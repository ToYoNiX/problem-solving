#include <iostream>
#define ll long long
using namespace std;

int main () {
    ll n = 2e5 + 1, a[n];
    a[0] = 0;

    for(ll i = 1; i < n; i++) {
        int n = 0, t = i;
        while (t) {
            n += t % 10;
            t /= 10;
        }

        a[i] = a[i - 1] + n;
    }

    int t;
    cin >> t;

    while (t--) {
        int i;
        cin >> i;
        cout << a[i] << '\n';
    }
}
