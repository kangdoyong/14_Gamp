#include "Sample2.h"

Sample2::Sample2(int data)
	: a(data)
{
	// ���� ���� �ʱ�ȭ ����� ���� ���� �����Ͽ�
	// �ʱ�ȭ�ϴ� ��İ��� �������� ������ �ٸ�
	// -> ������ ���� ���� ó������ �ʵ忡 ���� �Ҵ��� �� ����

	// a = data;
	cout << "Sample2(int) ȣ��" << endl;
}

Sample2::Sample2(int data1, int data2)
	: Sample2(data1)
{
	// ���ӻ����ڸ� �ǹ�
	// �����ε� �Ǿ��ִ� �ڱ� �ڽ��� �ٸ� �����ڸ� ���� ȣ���� �� ���

	b = data2;
	cout << "Sample2(int, int) ȣ��" << endl;
}

Sample2::~Sample2()
{
}

void Sample2::Print()
{
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
}
