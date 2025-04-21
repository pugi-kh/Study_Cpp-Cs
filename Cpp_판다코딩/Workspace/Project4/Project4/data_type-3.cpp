#include <iostream>

using namespace std;

int main() {

	int a = 66;
	char b = a;
	cout << b << endl;

	b = 'E';
	cout << b << endl;

	// null 문자 : '\0'
	// ""(큰따옴표) 는 명시적으로 null문자가 마지막에 포함되어있음!! >> string

	return 0;
}