#pragma once
#include <iostream>
using namespace std;

class AirConditioner
{
private:
	// ���� ���� ��, ��Ÿ�� �����Ͱ� 2�����̹Ƿ�
	// enum �Ǵ� bool
	bool power;
	int temp;

public:
	// ���� ��/����
	void SetPower(bool power);
	// �µ� ����
	void SetTemp(int temp);
	// �µ� 1�� ����/����
	void UpTemp();
	void DownTemp();
	// ���� �µ� ���
	void PrintTemp();
};

