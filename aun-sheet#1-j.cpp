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

    if (b > a) {
        a = a + b;
        b = a - b;
        a = a - b;
    }

    char ans[][13] = {"No Multiples", "Multiples"};
    cout << ans[a % b == 0] << el;
    return 0;
}