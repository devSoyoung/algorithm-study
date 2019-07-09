// 소수점 자릿수 지정 : cout.precision()
// 참고링크 : https://pmoncode.tistory.com/20

#include <iostream>
using namespace std;

int main(){
	double a, b;
	cin >> a >> b;
	cout << fixed;          // 소수점을 고정시켜 표현을 하겠다는 뜻
	cout.precision(9);
	cout << a / b;
}