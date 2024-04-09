#include <iostream>
#include <unordered_map>
using namespace std;

int main () {
    int n;
    cin >> n;

    unordered_map <string, int> registered;
    
    while (n--) {
        string s;
        cin >> s;

        if (registered[s] != 0)
            cout << s << registered[s] << '\n';
        else
            cout << "OK\n";

        registered[s]++;
    }
}
