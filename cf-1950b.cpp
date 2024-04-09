#include <iostream>
using namespace std;

int main () {
    string s1 = "##..##..##..##..##..##..##..##..##..##..",
        s2 = "..##..##..##..##..##..##..##..##..##..##";

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        bool flag = true;
        for (int i = 0; i < n * 2; i += 2) {
            if (flag) {
                for (int j = 0; j < 2; j++) {
                    for (int i = 0; i < n*2; i++) {
                        cout << s1[i];
                    }
                    cout << '\n';
                }
            }
            else {
                for (int j = 0; j < 2; j++) {
                    for (int i = 0; i < n*2; i++) {
                        cout << s2[i];
                    }
                    cout << '\n';
                }
            }

            flag = !flag;
        }
    }
}