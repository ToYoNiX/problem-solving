#include <iostream>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        bool isIntersect = false;
        int i = min(a, b), j = max(a, b);
        for (; i < j; i++) {
            if (c == i || d == i)
                isIntersect = !isIntersect;
        }

        cout << (isIntersect ? "YES" : "NO") << '\n';
    }
}