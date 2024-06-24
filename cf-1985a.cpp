#include <iostream>
#include <deque>
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
        string s1, s2;
        cin >> s1 >> s2;
 
        cout << s2[0];
        for (int i = 1; i < s1.size(); i++) {
            cout << s1[i];
        }
        cout << ' ';
 
        cout << s1[0];
        for (int i = 1; i < s2.size(); i++) {
            cout << s2[i];
        }
        cout << '\n';
    }
    return 0;
}
