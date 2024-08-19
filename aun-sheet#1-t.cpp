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

    ll arr[3], sorted[3];
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
        sorted[i] = arr[i];
    }
    sort(sorted, sorted + 3);

    for (int i = 0; i < 3; i++) {
        cout << sorted[i] << el;
    }

    cout << '\n';

    for (int i = 0; i < 3; i++) {
        cout << arr[i] << el;
    }
    return 0;
}