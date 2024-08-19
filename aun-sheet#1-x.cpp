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

    ll l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    if (l1 >= l2 && r1 >= r2 && l1 <= r2) {

        cout << l1 << ' ' << r2 << el;
    } else if (l2 >= l1 && r2 >= r1 && l2 <= r1) {
    
        cout << l2 << ' ' << r1 << el;
    } else if (l1 >= l2 && r2 >= r1) {
    
        cout << l1 << ' ' << r1 << el;
    }  else if (l2 >= l1 && r1 >= r2) {
    
        cout << l2 << ' ' << r2 << el;
    } else {
        cout << "-1\n";
    }

    return 0;
}