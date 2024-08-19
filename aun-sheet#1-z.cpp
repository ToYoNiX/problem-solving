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

    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    char ans[][4] = {"NO", "YES"};
    cout << ans[b * log(a) > d * log(c)] << el;

    return 0;
}