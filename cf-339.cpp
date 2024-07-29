#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
    
    sort (s.begin(), s.end());
    int len = s.size();
    
    for (int i = 0; i < len; i++) {
        if (s[i] == '+')
            continue;
            
        cout << s[i];

        if (i < len - 1)
            cout << '+';
    }
    return 0;
}