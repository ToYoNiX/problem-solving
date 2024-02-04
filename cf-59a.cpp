#include <iostream>
using namespace std;

int main () {
    string s;
    cin >> s;

    int len = s.length(), upperCnt = 0, lowerCnt = 0, C = len;
    while (C--) {
        if (isupper(s[C]))
            upperCnt++;
    }
    lowerCnt = len - upperCnt;

    if (upperCnt > lowerCnt)
        for (C = 0; C < len; C++)
            cout << char(toupper(s[C]));
    else
        for (C = 0; C < len; C++)
            cout << char(tolower(s[C]));

    return 0;
}
