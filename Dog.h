#pragma once

// ��ü���� ���α׷��ֿ����� ���м��� ���Ѱ��� ���α׷���
// Ŭ������ �ʵ�� ���м��� ��Ű�� ���Ͽ�
// �ܺο� ���� �����ų �ʿ䰡 ���� �ʵ�� private���� ����

// ���� �ܺο��� ����� ���� �ִٸ�
// public���� ����� �Լ��� ���� ������ �б�/���� �۾�
// -> �б� �뵵�� ������(Getter), ���� �뵵�� ������(Setter)

#include <iostream>
#include <string>
using namespace std;

class Dog
{
private:
	int age;
	string name;

public:
	// age�� ���� getter, setter
	// ���������� ���̹� ��, ���ξ�� Get, Set�� ����
	int GetAge() { return age; }
	void SetAge(int value) { age = value; }

	string GetName() { return name; }
	void SetName(string value) { name = value; }
};

