#include <iostream>
using namespace std;

int main () {
    int matrix[5][5], xPos, yPos;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j])
                xPos = i, yPos = j;
        }

    cout << abs(2 - xPos) + abs(2 - yPos);
    return 0;
}
