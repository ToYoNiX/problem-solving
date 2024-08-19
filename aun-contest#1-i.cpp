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

    int n, d1, d2;
    cin >> n;

    d1 = n / 10;
    d2 = n % 10;

    if (d1 == 0 || d2 == 0 || d1 % d2 == 0 || d2 % d1 == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}