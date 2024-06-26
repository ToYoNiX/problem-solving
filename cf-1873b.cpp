#include <iostream>
#include <algorithm>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        arr[0]++;

        int ans = 1;
        while (n--) {
            ans *= arr[n];
        }
        
        cout << ans << '\n';
    }
}