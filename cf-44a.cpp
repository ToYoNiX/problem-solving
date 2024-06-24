#include <iostream>
#include <set>
using namespace std;

int main () {
    int n, ans = 0;
    cin >> n;

    set <pair<string, string>> picked;
    while (n--) {
        string species, color;
        cin >> species >> color;

        if (picked.find({species, color}) != picked.end()) {
            continue;
        }

        picked.insert({species, color});
        ans++;
    }
    
    cout << ans << '\n';
}