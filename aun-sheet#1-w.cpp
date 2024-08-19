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

    ll a, b, c, calc;
    char s, q;

    cin >> a >> s >> b >> q >> c;

    if (s == '+') {

        calc = a + b;
        cout << ((calc == c) ? "Yes" : to_string(calc));
    } else if (s == '-') {

        calc = a - b;
        cout << ((calc == c) ? "Yes" : to_string(calc));
    } else {

        calc = a * b;
        cout << ((calc == c) ? "Yes" : to_string(calc));
    }

    return 0;
}