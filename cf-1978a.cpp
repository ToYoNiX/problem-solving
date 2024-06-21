#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;

        pair <ll, ll> books[n], temp;

        for (ll i = 0; i < n; i++) {
            ll p;
            cin >> p;
            books[i] = {p, i + 1};
        }

        temp = books[n - 1];

        sort(books, books + n);

        if (temp.second == books[n - 1].second) {
            cout << books[n - 1].first + books[n - 2].first;
        } else {
            cout << books[n - 1].first + temp.first;
        }

        cout << '\n';
    }
}