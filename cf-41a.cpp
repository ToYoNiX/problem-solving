#include <iostream>
using namespace std;

int main () {
    string s, r;
    cin >> s >> r;

    int len = s.size();
    for (int i = 0; i < len; i++) {
        if (s[i] != r[len - 1 - i]) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}