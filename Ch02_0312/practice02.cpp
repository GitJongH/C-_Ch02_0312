#include <iostream>
#include <string>
using namespace std;
// ��������-�ǽ�p90
// 6�� ����  

int main() {
	cout << "�� ��ȣ�� �Է��ϼ���>>";
	string passwd;
	cin >> passwd;
	
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
	string passwd2;
	cin >> passwd2;
	
	if (passwd == passwd2) {
		cout << "�����ϴ�.";
	}
	else {
		cout << "���� �ʽ��ϴ�.";
	}
	
	return 0;
}
