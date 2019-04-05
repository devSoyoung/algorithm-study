#include <iostream>
using namespace std;

int Factorial(int num) {
    if (num == 1) { return 1; } 
    return num * Factorial(num - 1);
}

int main() {
    int number;
    cin >> number;
    
    cout << Factorial(number) << endl;
    return 0;
}
