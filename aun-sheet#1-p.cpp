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

    string s;
    cin >> s;

    int num = s[0] - '0';

    char ans[][5] = {"ODD", "EVEN"};
    cout << ans[num % 2 == 0] << el;
    return 0;
}