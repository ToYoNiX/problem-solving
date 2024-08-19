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

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int len = s.length();
        
        if (len < 3) {
            cout << "NO\n";
            continue;
        }

        if (s[0] != '1' || s[1] != '0' || s == "101") {
            cout << "NO\n";
            continue;
        }

        if (s[2] == '0') {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
    }
    

    return 0;
}