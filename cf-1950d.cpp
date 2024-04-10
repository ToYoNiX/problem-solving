#include <iostream>
#include <unordered_map>
#define ll long long
using namespace std;

void fastio(){
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

unordered_map <ll, bool> map;

void gen (ll i = 1) {
    if (i > 10e5) {
        return;
    }

    map[i] = 1;

    gen(i * 10);
    gen(i * 11);
    gen(i * 100);
    gen(i * 101);
    gen(i * 110);
    gen(i * 111);
    gen(i * 1000);
    gen(i * 1001);
    gen(i * 1010);
    gen(i * 1011);
    gen(i * 1100);
    gen(i * 1101);
    gen(i * 1110);
    gen(i * 1111);
}

int main () {
    fastio();
    gen();

    int t;
    cin >> t;

    while (t--) {
        int n, temp;
        cin >> n;
        temp = n;
        bool flag = 0;

        while (temp) {
            int d = temp % 10;
            if (d != 0 && d != 1) {
                break;
            }

            temp /= 10;

            if (temp == 0) {
                flag = 1;
            }
        }

        if (flag || map[n])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}