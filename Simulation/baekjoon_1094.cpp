#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> stickList;
    stickList.push_back(64);

    int targetLength = 0;
    cin >> targetLength;

    while(true) {
        int totalLength = 0;
        // 전체를 돌면서 totalLength를 구한다
        // 절반은 버려진 상태
        vector<int>::iterator iter = stickList.begin();
        for (iter = stickList.begin(); iter != stickList.end(); ++iter) {
            totalLength += *iter;
        }

        // 길이가 일치하는 경우 반복문 탈출
        if (totalLength == targetLength) {
            break;
        }

        int shortestStick = stickList.back();
        stickList.pop_back();

        // shortestStick를 절반으로 자르고 stickList에 추가한다
        stickList.push_back(shortestStick / 2);
        totalLength -= shortestStick / 2;

        // totalLength가 targetLength과 같으면 반복문 탈출
        // 작으면 절반을 다시 포함
        if (totalLength < targetLength) {
            stickList.push_back(shortestStick / 2);
        }
    }
    // 막대의 갯수 출력
    cout << stickList.size() << endl;

    return 0;
}