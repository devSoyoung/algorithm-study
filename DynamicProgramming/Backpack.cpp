/*
 * 배낭문제
 * 
 */

#include <iostream>
using namespace std;

int main() {
    int** item = new int*[3];
    item[0] = new int[3]{1, 60, 10};
    item[1] = new int[3]{2, 100, 20};
    item[2] = new int[3]{3, 120, 30};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << item[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}