#include <iostream>
#include <string> 
using namespace std;

int main() {
	string str = "012345";
	cout << str.size() << endl; // size() : ���ڿ� ���� ��ȯ  
	
	str += "ccc"; // append ��� ���ϱ� ������ ��� 
	cout << str << endl;  
	
	str.insert(2, "bbb"); // insert() : ���ڿ� ����  
	cout << str << endl;
	
	str.replace(2, 3, "bbb"); // replace() : ���ڿ� ��ü  
	cout << str << endl;
	
	cout << str.substr(2, 3) << endl; // substr() : �κ� ���� ��ȯ  
	
	int result = str.find("bbb"); // find() : ���ڰ� �����ϴ� ���, �ش� ��ġ�� index�� ��ȯ  
	cout << str << endl;
	
	return 0;
}
