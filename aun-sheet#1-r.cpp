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
    
    ll days, months, years;
    cin >> days;

    years = days / 365;
    days %= 365;

    months = days / 30;
    days %= 30;

    cout << years << " years\n"
        << months << " months\n"
        << days << " days\n";

    return 0;
}