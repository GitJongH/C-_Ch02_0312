#include <iostream>
using namespace std;
// 연습문제-실습p89
// 3번 문제 
int main() {
	int num1, num2;
	cout << "두 수를 입력하라>>";
	cin >> num1 >> num2;
	
	if (num1 > num2) {
		cout << "큰 수 = " << num1;
	}
	else {
		cout << "큰 수 = " << num2;
	}
	return 0;
}
