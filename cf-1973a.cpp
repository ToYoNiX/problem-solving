#include <iostream>
#include <algorithm>
using namespace std;
 
int main () {
    int t;
    cin >> t;
    
    while (t--) {
        int total = 0, p[3];
        for (int i = 0; i < 3; i++) {
            cin >> p[i];
            total += p[i];
        }
 
        if (total % 2 != 0) {
            cout << "-1\n";
            continue;
        }
        total = total / 2;
 
        sort(p, p + 3);
        if (p[2] > p[0] + p[1]) {
            cout << p[0] + p[1] << '\n';
            continue;
        }
 
        cout << min(total, p[0] + p[1]) << '\n';
    }
}