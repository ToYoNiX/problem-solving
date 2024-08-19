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

    ld n, f;
    cin >> n;

    f = floor(n);
    if (n == f) {
        cout << "int " << n;
    } else {
        cout << "float " << f << ' ' << n - f;
    }

    return 0;
}