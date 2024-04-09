#include <iostream>
#include <unordered_map>
using namespace std;

int main () {
    int t;
    cin >> t;

    string names[t];
    unordered_map <string, bool> seen;

    for (int i = 0; i < t; i++) {
        cin >> names[i];
    }

    for (int i = t - 1; i >= 0; i--) {
        if (!seen[names[i]])
            cout << names[i] << '\n';

        seen[names[i]] = 1;
    }
}
