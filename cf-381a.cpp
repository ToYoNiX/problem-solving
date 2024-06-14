#include <iostream>
#include <deque>
using namespace std;

int main () {
    int n;
    cin >> n;

    deque <int> dq;
    while (n--) {
        int a;
        cin >> a;
        dq.push_back(a);
    }

    bool turn = 0;
    int p0 = 0, p1 = 0;

    while (!dq.empty()) {
        if (turn == 0) {
            if (dq.back() > dq.front()) {
                p0 += dq.back();
                dq.pop_back();
            } else {
                p0 += dq.front();
                dq.pop_front();
            }
        } else {
            if (dq.back() > dq.front()) {
                p1 += dq.back();
                dq.pop_back();
            } else {
                p1 += dq.front();
                dq.pop_front();
            }
        }

        turn = !turn;
    }

    cout << p0 << ' ' << p1 << '\n';
}