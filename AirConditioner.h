#pragma once
#include <iostream>
using namespace std;

class AirConditioner
{
private:
	// 전원 선언 시, 나타낼 데이터가 2가지이므로
	// enum 또는 bool
	bool power;
	int temp;

public:
	// 전원 온/오프
	void SetPower(bool power);
	// 온도 설정
	void SetTemp(int temp);
	// 온도 1도 증가/감소
	void UpTemp();
	void DownTemp();
	// 현재 온도 출력
	void PrintTemp();
};

