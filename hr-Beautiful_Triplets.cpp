#include <iostream>
#include <map>
using namespace std;

int main () {
    int n, d;
    cin >> n >> d;

    map <int, int> freq;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        freq[a]++;
    }

    int ans = 0;
    for (auto itr : freq) {
        int n1 = itr.first, n2 = n1 + d, n3 = n2 + d;
        if (freq.find(n2) != freq.end() && freq.find(n3) != freq.end()) {
            ans += itr.second * freq[n2] * freq[n3];
        }
    }

    cout << ans << '\n';
}