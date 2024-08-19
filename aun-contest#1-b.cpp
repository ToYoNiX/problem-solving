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

    ll a, b, k;
    cin >> a >> b >> k;

    bool memo = (a % k == 0), momo = (b % k == 0);

    if (memo && momo) {
        cout << "Both\n";
    } else if (memo) {
        cout << "Memo\n";
    } else if (momo) {
        cout << "Momo\n";
    } else {
        cout << "No One\n";
    }

    return 0;
}