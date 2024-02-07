#include <iostream>
using namespace std;

int main () {
    int n, i, a = 0;
    
    cin >> n;
    while (n--) {
        cin >> i;

        if (i)
            a = 1;
    }

    cout << (a ? "HARD" : "EASY");
}
