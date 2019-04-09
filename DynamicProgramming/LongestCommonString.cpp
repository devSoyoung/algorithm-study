/*
 * 최장 공통 부분 수열 문제
 * 풀이: 
 */

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s1 = "ABCBDAB";
    string s2 = "BDCABA";

    int len1 = s1.length();
    int len2 = s2.length();

    int** result = new int*[len1];
    for (int i = 0; i <= len1; i++) {
        result[i] = new int[len2 + 1];
    }
    
    for (int i = 0; i <= len1; i++) {
        for (int j = 0; j <= len2; j++) {
            // 초기 값 설정
            if (i == 0 || j == 0) {
                result[i][j] = 0;
            } else if (s1[i - 1] == s2[j - 1]) {
                result[i][j] = result[i - 1][j - 1] + 1;
            } else {
                result[i][j] = max(result[i - 1][j], result[i][j - 1]);
            }
        }
    }

    cout << result[len1][len2] << endl;
    return 0;
}