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
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int ans1 = n * a,
        ans2 = (n / m) * b + min((n % m) * a, b);
    
    cout << min(ans1, ans2);
}