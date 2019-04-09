/*
 * 각 막대를 잘라서 받을 수 있는 최대 가격
 * 길이(i)  0 1 2 3 4 5 6 7 8 9 10
 * 가격(Pi) 0 1 5 8 9 10 17 17 20 24 30
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n = 11;
    int price[11] = { 0, 1, 5, 8, 9, 10, 17, 17, 20, 24, 30 };

    int maxPrice[11] = { 0, };
    int* memo = new int[11];

    for (int i = 1; i < n; i++) {
        int curMaxPrice = -1;
        for (int j = 1; j <= i; j++) {
            curMaxPrice = max(curMaxPrice, price[j] + maxPrice[i - j]);
        }
        maxPrice[i] = curMaxPrice;
    }

    for (int i = 1; i < 11; i++) {
        cout << maxPrice[i] << ' ';
    }
    cout << endl;
    
    return 0;
}