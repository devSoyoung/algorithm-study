// 홀수만 더하기
#include <iostream>
using namespace std;

int main() {
	int caseNum;
	cin >> caseNum;
	for (int i = 0; i < caseNum; i++) {
		int num[10], sum = 0;
		for (int i = 0; i < 10; i++) {
			cin >> num[i];
			if (num[i] % 2 == 1) sum += num[i];
		}
		cout << '#' << i + 1 << ' ' << sum << endl;
	}
	return 0;
}