#include <iostream>
#include <algorithm>
#define ll long long
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
        int n, m;
        cin >> n >> m;

        string s[n];
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }

        int max_size = 0;
        pair <int, int> mid;
        for (int i = 0; i < n; i++) {
            int start = -1;
            string tmp = "";
            for (int j = 0; j < m; j++) {
                if (s[i][j] == '#') {
                    tmp += '#';

                    if (start == -1) {
                        start = j;
                    }
                }
            }

            if (tmp.size() > max_size) {
                max_size = tmp.size();
                int m = start + tmp.size() / 2;
                mid = {i + 1, m + 1};
            }
        }

        cout << mid.first << ' ' << mid.second << '\n';
    }

    return 0;
}