#include <iostream>
#include <string>
using namespace std;
// ��������-�ǽ�  
// 14�� ����  
int main() {
	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�.\n";
	int num, result = 0;
	string coffee;
	
	while(result < 20000) {
		cout << "�ֹ�>>";
		cin >> coffee >> num;
		
		if (coffee == "����������") {
			cout << num * 2000 << "���Դϴ�. ���ְ� �弼��.\n";
			result += num * 2000;
		}
		else if (coffee == "�Ƹ޸�ī��") {
			cout << num * 2300 << "���Դϴ�. ���ְ� �弼��.\n";
			result += num * 2300;
		}
		else if (coffee == "īǪġ��") {
			cout << num * 2500 << "���Դϴ�. ���ְ� �弼��.\n";
			result += num * 2500;
		}
	}
	cout << "���� " << result << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~\n"; 	
	 
	return 0;
}
