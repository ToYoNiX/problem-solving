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
    
    ld x, y;
    cin >> x >> y;

    if (x == 0 && y == 0) {

        cout << "Origem";
    } else if (y == 0) {

        cout << "Eixo X";
    } else if (x == 0) {

        cout << "Eixo Y";
    } else if (x > 0 && y > 0) {

        cout << "Q1";
    } else if (x < 0 && y > 0) {

        cout << "Q2";
    } else if (x < 0 && y < 0) {

        cout << "Q3";
    } else {

        cout << "Q4";
    } 

    return 0;
}