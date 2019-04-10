#include <iostream>
using namespace std;

int main() {
    int testcase;
    cin >> testcase;

    while(testcase--) {
        // 계산할 대상 숫자 n 입력
        int n;
        cin >> n;
        
        // 최대 10
        int DP[11] = {};
        DP[0] = 1;

        for (int i = 1; i <= n; i++) {
            if (i - 1 >= 0) {       // 앞 자리가 1일 때, i - 1을 만드는 방법의 수
                DP[i] += DP[i - 1];
            }
            if (i - 2 >= 0) {       // 앞 자리가 2일 때, i - 2를 만드는 방법의 수
                DP[i] += DP[i - 2];
            }
            if (i - 3 >= 0) {       // 앞 자리가 3일 때, i - 3을 만드는 방법의 수
                DP[i] += DP[i - 3];
            }
        }
        printf("%d \n", DP[n]);
    }
    return 0;
}