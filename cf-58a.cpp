#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ull unsigned long long
#define uld unsigned long double
#define el '\n'
using namespace std;
 
void fastio () {
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main () {
    string h = "hello", s;
    cin >> s;

    int len = s.length(), idx = 0;
    for (int i = 0; i < len; i++) {
        if (s[i] == h[idx]) {
            idx++;
        }

        if (idx == 5) {
            break;
        }
    }

    if (idx == 5) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}