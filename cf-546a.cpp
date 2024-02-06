#include <iostream>
#define ll long long
using namespace std;

int main () {
    ll k, w, n, t = 0;
    cin >> k >> w >> n;

    for (int i = 1; i <= n; i++) {
        t += i * k;
    }

    if (w >= t)
        cout << 0 << '\n';
    else
        cout << t - w << '\n';
}
