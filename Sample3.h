#pragma once
#include <iostream>
using namespace std;

class Sample3
{
private:
	int v1;
	int v2;
	char* tag;
	string* test;

public:
	Sample3();
	~Sample3();

	// Ŭ������ ���� �����ڸ� ��������� �������� �ʾ��� ���
	// �⺻ ���� �����ڸ� ����
	// const ��üŸ��&
	// -> const Ű���� ��� ����
	//    �Լ� ���ο��� �Ű������� ���޵� ��ü�� ������ ���� ���ؼ�
	Sample3(const Sample3& instance);

	void Print();
};

