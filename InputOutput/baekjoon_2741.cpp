// endl로 개행을 출력하면 시간초과가 뜸
// endl은 느리기 때문에, 개행이 필요하면 \n을 사용하자

// 참고링크 : https://www.acmicpc.net/board/view/21731

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << i << "\n";
    }
    return 0;
}