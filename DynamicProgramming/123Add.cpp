#include <iostream>
using namespace std;

int main() {
    int testcase;
    cin >> testcase;

    while(testcase--) {
        // 최대 10
        int DP[10] = {};
        DP[0] = 1;
        
        // 계산할 대상 숫자 n 입력
        int n;
        cin >> n;

        for (int i = 0; i <= n; i++) {
            if (i - 1>= 0) {
                DP[i] += DP[i - 1];
            }
            if (i - 2 >= 0) {
                DP[i] += DP[i - 2];
            }
            if (i - 3) {
                DP[i] = DP[i - 3];
            }
        }
    }
    return 0;
}