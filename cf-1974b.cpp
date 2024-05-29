#include <iostream>
#include <map>
#define ll long long
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--) {
        ll n;
        string s, r;
        map <char, int> freq;
        cin >> n >> s;

        for (int i = 0; i < n; i++) {
            freq[s[i]]++;
        }

        for (auto c : freq) {
            r += c.first;
        }

        int len = r.length();
        map <char, char> decode;
        for (int i = 0; i < len; i++) { 
            decode[r[i]] = r[abs(len - i - 1)];
        }

        for (char c : s) {
            cout << decode[c];
        }
        cout << '\n';
    }
}