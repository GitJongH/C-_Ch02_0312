#include <iostream>
#include <string> 
using namespace std;

int main() {
	string str = "012345";
	cout << str.size() << endl; // size() : 문자열 길이 반환  
	
	str += "ccc"; // append 대신 더하기 연산자 사용 
	cout << str << endl;  
	
	str.insert(2, "bbb"); // insert() : 문자열 삽입  
	cout << str << endl;
	
	str.replace(2, 3, "bbb"); // replace() : 문자열 대체  
	cout << str << endl;
	
	cout << str.substr(2, 3) << endl; // substr() : 부분 문자 반환  
	
	int result = str.find("bbb"); // find() : 문자가 존재하는 경우, 해당 위치의 index를 반환  
	cout << str << endl;
	
	return 0;
}
