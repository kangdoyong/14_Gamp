#include "Human.h"
// ���� �Լ��� ���Ǹ� cpp�� �ۼ��ϹǷ�,
// �Լ��� ������ �ִ� ��������� ����

void Human::InitInfo(string name, Gender gender, int age)
{
	this->name = name;
	this->gender = gender;
	this->age = age;
}

void Human::PrintInfo()
{
	cout << "�̸� : " << name << endl;
	cout << "���� : " << (gender == Man ? "����" : "����") << endl;
	cout << "���� : " << age << endl;
}
