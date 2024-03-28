#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n, a;
    cin >> n;

    vector <int> pos, neg, zer;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a > 0)
            pos.push_back(a);
        else if (a < 0)
            neg.push_back(a);
        else
            zer.push_back(a);
    }

    if (pos.size() == 0) {
        int count = 2;
        while(count--) {
            pos.push_back(neg.back());
            neg.pop_back();
        }
    }

    if (neg.size() % 2 == 0) {
        zer.push_back(neg.back());
        neg.pop_back();
    }

    cout << neg.size();
    for (auto itr = neg.begin(); itr < neg.end(); itr++)
        cout << ' ' << *itr;

    cout << '\n' << pos.size();
    for (auto itr = pos.begin(); itr < pos.end(); itr++)
        cout << ' ' << *itr;

    cout << '\n' << zer.size();
    for (auto itr = zer.begin(); itr < zer.end(); itr++)
        cout << ' ' << *itr;
}
