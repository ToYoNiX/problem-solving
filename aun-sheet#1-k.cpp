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

    ll arr[3];
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
    }
    
    sort(arr, arr + 3);
    cout << arr[0] << ' ' << arr[2] << el;
    return 0;
}