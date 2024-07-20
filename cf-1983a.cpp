#include <bits/stdc++.h>
#define ll long long
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
        int n;
        cin >> n;
 
        for (int i = 1; i <= n; i++) {
            cout << i << ' ';
        }
        cout << '\n';
    }
    
 
    return 0;
}