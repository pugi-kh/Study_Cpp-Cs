#include <iostream>
#include <climits>

using namespace std;

int main() {

	int int_max = INT_MAX;
	short short_max = SHRT_MAX;
	long long_max = LONG_MAX;
	long long llong_max = LLONG_MAX;

	cout << "============= ����Ʈ =============" << endl;
	cout << "int\t\t : " << sizeof int_max << "����Ʈ" << endl;
	cout << "short\t\t : " << sizeof short_max << "����Ʈ" << endl;
	cout << "long\t\t : " << sizeof long_max << "����Ʈ" << endl;
	cout << "long long\t : " << sizeof llong_max << "����Ʈ" << endl;

	cout << "============= �ִ밪 =============" << endl;
	cout << "int\t\t : " << int_max << endl;
	cout << "short\t\t : " << short_max << endl;
	cout << "long\t\t : " << long_max << endl;
	cout << "long long\t : " << llong_max << endl;


	// unsigned�� ����ϸ� ������ ������� �ʰ� �ִ밪�� �� ũ�� �����
	cout << "============= unsigned =============" << endl;
	cout << "unsigned int�� �ִ밪" << endl;
	unsigned int a = -1;
	cout << " : " << a << endl;

	return 0;
}