#include <iostream>
using namespace std;

int main () {
    int t, n, plusCnt, minusCnt;
    string s;

    cin >> t;
    while(t--) {
        plusCnt = 0, minusCnt = 0;
        cin >> n >> s;
        while (n--) {
            if (s[n] == '+')
                plusCnt++;
            else
                minusCnt++;
        }

        cout << abs(plusCnt - minusCnt) << '\n';
    }

    return 0;
}
