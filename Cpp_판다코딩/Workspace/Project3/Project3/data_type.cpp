#include <iostream>
#include <climits>

using namespace std;

int main() {

	int int_max = INT_MAX;
	short short_max = SHRT_MAX;
	long long_max = LONG_MAX;
	long long llong_max = LLONG_MAX;

	cout << "============= 바이트 =============" << endl;
	cout << "int\t\t : " << sizeof int_max << "바이트" << endl;
	cout << "short\t\t : " << sizeof short_max << "바이트" << endl;
	cout << "long\t\t : " << sizeof long_max << "바이트" << endl;
	cout << "long long\t : " << sizeof llong_max << "바이트" << endl;

	cout << "============= 최대값 =============" << endl;
	cout << "int\t\t : " << int_max << endl;
	cout << "short\t\t : " << short_max << endl;
	cout << "long\t\t : " << long_max << endl;
	cout << "long long\t : " << llong_max << endl;


	// unsigned를 사용하면 음수를 사용하지 않고 최대값을 더 크게 사용함
	cout << "============= unsigned =============" << endl;
	cout << "unsigned int의 최대값" << endl;
	unsigned int a = -1;
	cout << " : " << a << endl;

	return 0;
}