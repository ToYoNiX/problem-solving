#include <iostream>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int a = 0, b = 0 , c = 0;
        string s[3];
        for (int i = 0; i < 3; i++) {
            cin >> s[i];
        }

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (s[i][j] == 'A')
                    a++;
                else if (s[i][j] == 'B')
                    b++;
                else if (s[i][j] == 'C')
                    c++;
            }
        }

        if (a == 2)
            cout << "A\n";
        else if (b == 2)
            cout << "B\n";
        else
            cout << "C\n";
    }
    
}