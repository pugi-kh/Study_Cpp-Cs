#include <iostream>

using namespace std;

int main() {

	//������ ����ȯ
	/*
	1. Ư�� ���������� ������ �ٸ� ���������� ���� �������� ��
	2. ���Ŀ� ���������� ȥ���Ͽ� ������� ��
	3. �Լ��� �Ű������� ������ ��
	*/
	
	int a = 3.141592; //�ڵ� ����ȯ
	cout << a << endl;

	//���� ����ȯ
	//typeName(a) or (typeName)a
	char ch = 'M';
	cout << (int)ch << " " << int(ch) << endl;

	//C++
	//static_cast<typeName>(var)
	cout << static_cast<int>(ch) << endl;

	cout << ch << endl;

	return 0;
}