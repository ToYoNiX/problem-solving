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

    ld n, k, a, eq;
    cin >> n >> k >> a;

    eq = (n * k) / a;

    if (eq == floor(eq)) {
        
        if (eq >= -2147483648 && eq <= 2147483647) {
            cout << "int\n";
        } else {
            cout << "long long\n";
        }
    } else {
        cout << "double\n";
    }

    return 0;
}