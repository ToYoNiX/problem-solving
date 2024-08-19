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

    string f1, s1, f2, s2;
    cin >> f1 >> s1 >> f2 >> s2;

    char ans[][13] = {"NOT", "ARE Brothers"};
    cout << ans[s1 == s2] << el;
    return 0;
}