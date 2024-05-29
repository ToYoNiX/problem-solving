#include <iostream>
using namespace std;

int main () {
    int t, n, m;
    cin >> t;

    while (t--) {
        cin >> n >> m;
        
        if (n == m) {
            cout << "YES\n";
            continue;
        }

        if (n < m) {
            cout << "NO\n";
            continue;
        }

        if ((m - n) % 2 == 0) {
            cout << "YES\n";
            continue;
        }

        cout << "NO\n";
    }
    
    return 0;
}