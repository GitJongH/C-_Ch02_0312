#include <iostream>
#include <string>
using namespace std;
// 연습문제-실습p90
// 6번 문제  

int main() {
	cout << "새 암호를 입력하세요>>";
	string passwd;
	cin >> passwd;
	
	cout << "새 암호를 다시 한 번 입력하세요>>";
	string passwd2;
	cin >> passwd2;
	
	if (passwd == passwd2) {
		cout << "같습니다.";
	}
	else {
		cout << "같지 않습니다.";
	}
	
	return 0;
}
