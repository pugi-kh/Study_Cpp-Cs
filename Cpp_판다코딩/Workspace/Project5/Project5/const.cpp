#include <iostream>

using namespace std;

int main() {
	// 원의 넓이를 구하는 프로그램
	// 반지름 * 반지름 * 파이

	//상수
	//1. 바뀔 필요가 없는 수
	//2. 바뀌면 안되는 수
	const float PIE = 3.141592;
	//상수는 바뀌면 안되기 때문에 선언과 동시에 초기화 진행
	//이후에는 수정 불가능

	int r = 3;
	float s = r * r * PIE;
	//PIE = 10; //상수는 수정이 안됨
	int r2 = 4;
	float s2 = r2 * r2 * PIE;

	cout << "반지름이 " << r << "인 원의 넓이 : " << s << endl;
	cout << "반지름이 " << r2 << "인 원의 넓이 : " << s2 << endl;

	return 0;
}