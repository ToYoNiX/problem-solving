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

    ll x, y, sum, mul, sub;
    cin >> x >> y;

    sum = x + y;
    mul = x * y;
    sub = x - y;

    cout << x << " + " << y << " = " << sum << el;
    cout << x << " * " << y << " = " << mul << el;
    cout << x << " - " << y << " = " << sub << el;

    return 0;
}