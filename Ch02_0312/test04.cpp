#include <iostream>
#include <string> // string Ŭ������ ����ϱ� ���� ��� ����  
using namespace std;

int main() {
	string song("Falling in love with you"); // ���ڿ� song
	string elvis("Elvis Presley"); // ���ڿ� elvis 
	//string singer; // ���ڿ� singer 
	string singer = "";
	
	cout << song + "�� �θ� ������"; // + �� ���ڿ� ���� 
	cout << "(��Ʈ : ù���ڴ� " << elvis[0] << ")?"; // [] ������ ���  
	
	// getline() �� steing Ÿ���� �L�ڿ��� �Է� �ޱ� ���� ����Ǵ� ���� �Լ�  
	// ��ĭ�� �����ϴ� ���ڿ� �Է� ����  
	getline(cin, singer); // ���ڿ� �Է�  
	if(singer == elvis) { // ���ڿ� ��  
		cout << "�¾ҽ��ϴ�.";
	} 
	else cout << "Ʋ�Ƚ��ϴ�." + elvis + "�Դϴ�." << endl; // + �� ���ڿ� ����  
	return 0;
}
