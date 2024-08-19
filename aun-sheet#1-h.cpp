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

    ld a, b, _floor, _round, _ceil;
    cin >> a >> b;

    _floor = floor(a / b);
    _ceil = ceil(a / b);
    _round = round(a / b);

    cout << "floor " << a << " / " << b << " = " << _floor << el;
    cout << "ceil " << a << " / " << b << " = " << _ceil << el;
    cout << "round " << a << " / " << b << " = " << _round << el;

    return 0;
}