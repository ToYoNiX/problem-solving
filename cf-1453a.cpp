#include <iostream>
#include <unordered_set>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--) {
        int n, m, cont = 0;
        cin >> n >> m;

        unordered_set <int> st;
        
        while (n--) {
            int l;
            cin >> l;
            st.insert(l);
        }

        while (m--) {
            int b;
            cin >> b;

            if (st.find(b) != st.end())
                cont++;
        }

        cout << cont << '\n';
    }
}
