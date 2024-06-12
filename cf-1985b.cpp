#include <iostream>
#include <algorithm>
#include <unordered_map>
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
 
        if (n == 3) {
            cout << "3\n";
        } else {
            cout << "2\n";
        }
    }

    return 0;
}