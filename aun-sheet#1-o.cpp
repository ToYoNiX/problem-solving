#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define pi 3.141592653
#define el '\n'
using namespace std;
 
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

    int i = 0, a = 0, b = 0;
    
    char c;
    while (isdigit(s[i])) {
        i++;
    }
    c = s[i];

    a = stoi(s.substr(0, i));
    b = stoi(s.substr(i + 1));

    if (c == '+') {
        cout << a + b << el;
    } else if (c == '-') {
        cout << a - b << el;
    } else if (c == '*') {
        cout << a * b << el;
    } else {
        cout << a / b << el;
    }

    return 0;
}