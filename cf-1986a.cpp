#include <iostream>
#include <algorithm>
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
        int x[3];

        for (int i = 0; i < 3; i++) {
            cin >> x[i];
        }

        sort(x, x + 3);

        int ans = (x[1] - x[0]) + (x[2] - x[1]);
        cout << ans << '\n';
    }
    
    return 0;
}