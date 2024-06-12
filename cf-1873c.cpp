#include <iostream>
using namespace std;

short score[10][10] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
    {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
    {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
    {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
    {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
    {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
    {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
    {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};

int main () {
    int t;
    cin >> t;

    while (t--) {
        string s[10];
        for (short i = 0; i < 10; i++) {
            cin >> s[i];
        }

        int total = 0;
        for (short i = 0; i < 10; i++) {
            for (short j = 0; j < 10; j++) {
                if (s[i][j] == 'X') {
                    total += score[i][j];
                }
            }
        }

        cout << total << '\n';
    }
}