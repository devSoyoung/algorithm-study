#include <iostream>
using namespace std;

int main() {
    int currentPassengers = 0;
    int maxPassengers = 0;

    // input info
    for (int i = 0; i < 4; i++) {
        int inCount = 0, outCount = 0;
        cin >> outCount >> inCount;
        currentPassengers += (inCount - outCount);

        if (currentPassengers > maxPassengers) {
            maxPassengers = currentPassengers;
        }
    }

    cout << maxPassengers;

    return 0;
}