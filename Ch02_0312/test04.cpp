#include <iostream>
#include <string> // string 클래스를 사용하기 위한 헤더 파일  
using namespace std;

int main() {
	string song("Falling in love with you"); // 문자열 song
	string elvis("Elvis Presley"); // 문자열 elvis 
	//string singer; // 문자열 singer 
	string singer = "";
	
	cout << song + "를 부른 가수는"; // + 로 문자열 연결 
	cout << "(힌트 : 첫글자는 " << elvis[0] << ")?"; // [] 연산자 사용  
	
	// getline() 은 steing 타입의 묹자열을 입력 받기 위해 재공되는 전역 함수  
	// 빈칸을 포함하는 문자열 입력 가능  
	getline(cin, singer); // 문자열 입력  
	if(singer == elvis) { // 문자열 비교  
		cout << "맞았습니다.";
	} 
	else cout << "틀렸습니다." + elvis + "입니다." << endl; // + 로 문자열 연결  
	return 0;
}
