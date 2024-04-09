#include <iostream>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        int total_without = n * a,
            total_with = (n / 2) * b + (n % 2 == 0 ? 0 : a);

        cout << min(total_with, total_without) << '\n';
    }
}
