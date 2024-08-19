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

    ll a, ans = 1;
    for (int i = 0; i < 4; i++) {
        cin >> a;
        ans = (ans * a) % 100;
    }

    if (ans < 10) {
        cout << 0;
    }

    cout << ans << el;
    return 0;
}