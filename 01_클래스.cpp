#include <iostream>
using namespace std;

// Ŭ������?
// ����ü�� ����ϸ�, Ư���� ������ ��ü�� ����� ���� ����
// ���� ����ü�� ������ ������ ������ 
// Ŭ������ �� �� ������ ������ ������ ��Ÿ�� �� ���
// class��� Ű���带 ����Ͽ� ����
// �Ϲ������� Ŭ������� �����(.h)�� ������(.cpp)�� ���� �ۼ�

class MyClass
{
	// ���������� �� �ϳ�
	// public -> �ܺο��� ��� ����� ���� ������ ���
public:
	int variable;
	
	void Print()
	{
		cout << "Variable = " << variable << endl;
	}
};

void main()
{
	// MyClass ������ ��ü�� �Ҵ�
	MyClass mc;

	// ����� ���� ���� ��� ����ü�� ����
	mc.variable = 10;
	mc.Print();
}

