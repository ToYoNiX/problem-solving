#include <iostream>
#include <map>
using namespace std;

int main () {
    int n, a;
    cin >> n;

    map <int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a;
        mp[a]++;
    }

    int max = 0;
    for (auto itr : mp) {
        if (itr.second > max) {
            max = itr.second;
        }
    }

    cout << n - max << '\n';
}