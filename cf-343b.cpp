// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
char isYES[][4] = {"No", "Yes"};

void fastio () {
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
int main () {
    fastio();

    string s;
    cin >> s;

    stack <char> st;
    int len = s.length();

    for (int i = 0; i < len; i++) {
        if (!st.empty() && s[i] == st.top()) {
            st.pop();
        } else {
            st.push(s[i]);
        }
    }

    cout << isYES[st.empty()] << '\n';
}