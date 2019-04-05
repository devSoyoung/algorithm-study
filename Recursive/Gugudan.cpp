#include <iostream>
using namespace std;

void Gugudan(int dan, int n) {
    cout << dan << " * " << n << " = " << dan * n << endl;
    if (n < 9) { Gugudan(dan, n + 1); }
}

void inversedGugudan(int dan, int n) {
    cout << dan << " * " << n << " = " << dan * n << endl;
    if (n > 1) { Gugudan(dan, n - 1); }
}

int main() {
    int dan;
    cin >> dan;
	
    Gugudan(dan, 9);
    inversedGugudan(dan, 1);
    return 0;
}
