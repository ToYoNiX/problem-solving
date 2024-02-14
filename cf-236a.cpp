#include <iostream>
#include <unordered_set>
using namespace std;

bool solution1(string &s) {
    bool ALPHA[26]{};

    int len = s.length(), dLen = 0, c;
    for (int i = 0; i < len; i++) {
        c = s[i] - 97;
        if (ALPHA[c] == 0) {
            ALPHA[c] = 1;
            dLen += 1;
        }
    }

    if (dLen % 2 == 0)
        return 1;
    return 0;
}

bool solution2 (string s) {
    unordered_set <char> set;
    
    int len = s.length();
    for (int i = 0; i < len; i++) {
        set.insert(s[i]);
    }

    if (set.size() % 2 == 0)
        return 1;
    return 0;
}

int main () {
    string s;
    cin >> s;
    
    // bool ans = solution1(s);
    bool ans = solution2(s);

    if (ans)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}
