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

    ll a, b;
    cin >> a >> b;

    if (abs(a - b) < 2 && a != 0 && b != 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}