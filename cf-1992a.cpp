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
        int arr[3];
        for (int i = 0; i < 3; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + 3);

        int ans = (arr[0] + 2) * (arr[1] + 2) * (arr[2] + 1);
        ans = max(ans, (arr[0] + 3) * (arr[1] + 1) * (arr[2] + 1));
        ans = max(ans, (arr[0] + 3) * (arr[1] + 2) * arr[2]);
        ans = max(ans, (arr[0] + 4) * (arr[1] + 1) * arr[2]);
        ans = max(ans, (arr[0] + 5) * arr[1] * arr[2]);

        cout << ans << '\n';
    }

    return 0;
}