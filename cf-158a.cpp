#include <iostream>
using namespace std;

int main () {
    int n, k, ans = 0;

    cin >> n >> k;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    k = a[k - 1];
    for (int i = 0; i < n; i++)
        if (a[i] >= k && a[i] > 0)
            ans++;

    cout << ans << '\n';
    return 0;
}
