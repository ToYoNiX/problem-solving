#include <iostream>
using namespace std;

int main () {
    int n, a[5]{}, s, ans = 0;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> s;
        a[s]++;
    }

    ans += a[4];
    
    ans += a[3];
    a[1] -= a[3];

    ans += (a[2] / 2);
    if (a[2] % 2 != 0) {
        ans += 1;
        a[1] -= 2;
    }

    if (a[1] > 0)
        ans += (a[1] + 3) / 4;
    
    cout << ans;
}