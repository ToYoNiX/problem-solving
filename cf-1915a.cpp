#include <iostream>
using namespace std;

int main () {
    int t, a, b, c;
    cin >> t;
    while (t--){
        cin >> a >> b >> c;
        if (a == b)
            cout << c << '\n';
        else if (a == c)
            cout << b << '\n';
        else
            cout << a << '\n';
    }
}