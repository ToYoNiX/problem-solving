#include <iostream>
#define ll long long
using namespace std;

int main () {
    ll n, k;
    
    cin >> n >> k;
    while (k--) {
        if (n % 10 != 0)
            n--;
        else
            n /= 10;
    }

    cout << n << '\n';
}
