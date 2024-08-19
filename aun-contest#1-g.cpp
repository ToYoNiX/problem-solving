#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define pi 3.141592653
#define el '\n'
using namespace std;
 
void fastio () {
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main () {
    fastio();

    ll n, m, k, ans = 0, _min;
    cin >> n >> m >> k;

    _min = min(n, min(m, k));
    ans += _min;
    n -= _min;
    m -= _min;
    k -= _min;

    n = n / 2;
    ans += min(n, k);

    cout << ans << el;
    return 0;
}