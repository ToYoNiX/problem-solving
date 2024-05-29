#include <iostream>
#include <unordered_set>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        unordered_set <char> st;
        for (char c : s)
            st.insert(c);

        if (st.size() == 1) {
            cout << "NO\n";
            continue;
        }

        int len = s.length();
        for (int i = 1; i < len; i++) {
            char tmp = s[i];
            s[i] = s[i - 1];
            s[i - 1] = tmp;
        }

        cout << "YES\n" << s << '\n';
    }
}