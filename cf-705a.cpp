#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    bool isHate = true;
    while (n--) {
        cout << "I ";
        if (isHate)
            cout << "hate";
        else
            cout << "love";
        if (n != 0)
            cout << " that ";

        isHate = !isHate;
    }
    cout << " it";
    return 0;
}
