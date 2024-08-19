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

string decimal_to_binary(ll n, string s = "") {
    if (n == 0) {
        while (s.size() < 32){
            s.push_back('0');
        }
        
        reverse(s.begin(), s.end());
        return s;
    }

    if (n % 2 == 0) {
        return decimal_to_binary(n / 2, s + "0");
    }

    return decimal_to_binary(n / 2, s + "1");
}

ll binary_to_decimal (string s) {
    ll n = 0, idx = 1;

    for (int i = 31; i >= 0; i--) {
        if (s[i] == '1') {
            n += idx;
        }

        idx *= 2;
    }

    return n;
}

int main () {
    fastio();

    ll A, B;
    cin >> A >> B;

    string a = decimal_to_binary(A), b = decimal_to_binary(B), total = "";

    for (int i = 0; i < 32; i++) {
        if (a[i] == b[i]) {
            total.push_back('0');
        } else {
            total.push_back('1');
        }
    }

    cout << binary_to_decimal(total)<< el;
    return 0;
}