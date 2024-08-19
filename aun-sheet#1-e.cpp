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

    ld radius, area;
    cin >> radius;

    area = radius * radius * pi;
    cout << fixed << setprecision(9) << area << el;

    return 0;
}