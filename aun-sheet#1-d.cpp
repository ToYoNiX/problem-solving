#include <bits/stdc++.h>
#define ll long long
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

    ll a, b, c, d, x;
    cin >> a >> b >> c >> d;

    x = (a * b) - (c * d);
    cout << "Difference = " << x << el;

    return 0;
}