#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define pi 3.141592653
#define el '\n'
ll N =  2e5 + 1;
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
    char ans[][4] = {"NO", "YES"};

    while (t--) {
        ll n;
        cin >> n;

        ll seats[n];
        bool occupied[N] {}, followed = true;
        for (ll i = 0; i < n; i++) {
            cin >> seats[i];
        }

        occupied[seats[0] + 1] = true;
        for (ll i = 1; i < n; i++) {
            if (occupied[seats[i]] || occupied[seats[i] + 2]) {
                occupied[seats[i] + 1] = true;
            } else {
                followed = false;
                break;
            }
        }

        cout << ans[followed] << el;
    }
        

    return 0;
}