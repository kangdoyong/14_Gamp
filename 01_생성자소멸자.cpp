#include "Sample.h"

void Test()
{
	cout << "Sample ���� �Ҵ�" << endl;
	Sample sample;
	// ���� ��ǻ� ������ �ڵ���,
	// �̷��� ��������� �����ڸ� �θ� ���� ����
	// �����ڴ� �����ε��� �����ϹǷ�, �����ڰ� ������ ���� ���
	// ��������� Ư�� �����ڸ� ȣ���ϱ� ����
	//Sample sample = Sample();
}

void main()
{
	Test();

	cout << "Sample ���� �Ҵ�" << endl;
	Sample* mySample = new Sample();

	cout << "Sample �޸� ����" << endl;
	delete mySample;
	mySample = nullptr;
}