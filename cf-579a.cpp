#include <iostream>
#define ll long long
using namespace std;

void fastio () {
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void s1 (ll n) {
    int total = 0;
    while (n) {
        if (n % 2 != 0) {
            total++;
        }

        n /= 2;
    }

    cout << total << '\n';
}

void s2 (ll n) {
    int total = 0;
    while (n) {
        if (n & 1) {
            total++;
        }

        n = n >> 1;
    }
    
    cout << total << '\n';
}

void s3 (ll n) {
    int oneCount;
    oneCount = n - ((n >> 1) & 033333333333) - ((n >> 2) & 011111111111);
    oneCount = ((oneCount + (oneCount >> 3)) & 030707070707) % 63;
    cout << oneCount << '\n';
}

int main () {
    ll n;
    cin >> n;
    s3(n);
}