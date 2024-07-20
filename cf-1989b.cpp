#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void fastio () {
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int mpl (string sub_str, string sub_seq) {
    int seq = sub_seq.size(), str = sub_str.size(), _min = seq + str;

    for (int i = 0; i < seq; i++) {
        int idx = i;
        for (int j = 0; j < str; j++) {    
            if (idx < seq && sub_str[j] == sub_seq[idx]) {
                idx++;
            }
        }

        _min = min(_min, seq + str - idx + i);
    }

    return _min;
}

int main () {
    fastio();

    int t;
    cin >> t;

    while (t--) {
        string sub_str, sub_seq;
        cin >> sub_str >> sub_seq;

        cout << mpl(sub_str, sub_seq) << '\n';
    }

    return 0;
}