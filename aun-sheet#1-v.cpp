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

    int a, b;
    char c;

    cin >> a >> c >> b;

    char ans[][6] = {"Wrong", "Right"};

    if (c == '=') {

        cout << ans[a == b];
    } else if (c == '>') {
        
        cout << ans[a > b];
    } else {

        cout << ans[a < b];
    }

    return 0;
}