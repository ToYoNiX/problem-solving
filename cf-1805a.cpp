#include <iostream>
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

        int arr[n];
        cin >> arr[0];

        for (int i = 1; i < n; i++) {
            cin >> arr[i];
            arr[0] = arr[0] ^ arr[i];
        }

        if (n % 2 == 0 && arr[0] != 0) {
            cout << "-1\n";
        } else {
            cout << arr[0] << '\n';
        }
    }
}