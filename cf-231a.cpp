#include <iostream>
using namespace std;

int main () {
    int n, p = 0, c, t, a;
    
    cin >> n;
    while (n--) {
        t = 0, c = 3;
        while (c--) {
            cin >> a;
            if (a)
                t++;
        }
        
        if (t > 1)
            p++;
    }

    cout << p << '\n';
}
