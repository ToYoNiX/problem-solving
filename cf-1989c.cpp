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

        int a1[n], a2[n];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
    
        for (int i = 0; i < n; i++) {
            cin >> a2[i];
        }

        int t1 = 0, t2 = 0, pos = 0, neg = 0;
        for (int i = 0; i < n; i++) {
            if (a1[i] == 1 && a2[i] == 1) {
                pos++;
            } else if (a1[i] == -1 && a2[i] == -1) {
                neg++;
            } else {
                if (a1[i] >= a2[i]) {
                    t1 += a1[i];
                } else {
                    t2 += a2[i];
                }
            }
        }

        while (pos--) {
            if (t1 <= t2) {
                t1++;
            } else {
                t2++;
            }
        }
        
        while (neg--) {
            if (t1 >= t2) {
                t1--;
            } else {
                t2--;
            }
        }
        
        cout << min(t1, t2) << '\n';
    }

    return 0;
}