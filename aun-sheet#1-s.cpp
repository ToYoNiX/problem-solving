#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define pi 3.141592653
#define el '\n'
using namespace std;
 
void fastio () {
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main () {
    fastio();
    
    string intervals[4] = {
        "[0,25]",
        "(25,50]",
        "(50,75]",
        "(75,100]"
    };

    ld x;
    cin >> x;

    if (x >= 0 && x <= 25) {
        cout << "Interval " << intervals[0];
    } else if (x > 25 && x <= 50) {
        cout << "Interval " << intervals[1];
    } else if (x > 50 && x <= 75) {
        cout << "Interval " << intervals[2];
    } else if (x > 75 && x <= 100) {
        cout << "Interval " << intervals[3];
    } else {
        cout << "Out of Intervals";
    }

    return 0;
}