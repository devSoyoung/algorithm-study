#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 삼각형의 크기 입력받기
    int n = 0;
    cin >> n;

    // 노드의 개수 계산, 각 노드 입력받기
    int length = n * (n + 1) / 2;
    int* triangle = new int[length]();
    for (int i = 0; i < length; i++) {
        cin >> triangle[i];
    }

    // 각 위치의 최대값 구하기
    int curIdx = 1;
    int* maxLength = new int[length]();
    maxLength[0] = triangle[0];
    for (int i = 1; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            maxLength[curIdx] = triangle[curIdx];
            if (j == 0) {
                // 무조건 오른쪽 부모를 더한다
                maxLength[curIdx] += maxLength[curIdx - i];
            } else if (j == i) {
                // 무조건 왼쪽 부모를 더한다
                maxLength[curIdx] += maxLength[curIdx - (i + 1)];
            } else {
                maxLength[curIdx] += max(maxLength[curIdx - (i + 1)], maxLength[curIdx - i]);
            }
            curIdx++;
        }
    }

    // 최대값 찾기
    int maxValue = 0;
    for (int i = 0; i < length; i++) {
        maxValue = max(maxValue, maxLength[i]);
    }
    printf("%d", maxValue);

    return 0;
}