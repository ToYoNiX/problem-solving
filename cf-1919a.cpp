#include <iostream>
#define ll long long
using namespace std;

int main () {
    int t;
    ll a, b;
    
    cin >> t;
    while (t--) {
        cin >> a >> b;
        if (a == b)
            cout << "Bob\n";
        else if (a % 2 != 0 && b % 2 == 0)
            cout << "Alice\n";
        else if (a % 2 == 0 && b % 2 != 0)
            cout << "Alice\n";
        else if (a % 2 == 0 && b % 2 == 0)
            cout << "Bob\n";
        else
            cout << "Bob\n";
    }

    return 0;
}
