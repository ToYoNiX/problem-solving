#include <iostream>
using namespace std;

bool isVowel (char c) {
    if (c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i') 
        return 1;
    
    return 0;
}

int main () {
    string s, ans = "";
    cin >> s;

    int len = s.length();
    for (int i = 0; i < len; i++) {
        s[i] = tolower(s[i]);
        if (!isVowel(s[i])) {
            ans += s[i];
        }
    }

    len = ans.length();
    for (int i = 0; i < len; i++) {
        cout << '.' << ans[i];
    }
}