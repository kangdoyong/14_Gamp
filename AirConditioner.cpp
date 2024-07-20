#include "AirConditioner.h"

void AirConditioner::SetPower(bool power)
{
	this->power = power;
	cout << "전원 : " << (power ? "ON" : "OFF") << endl;
}

void AirConditioner::SetTemp(int temp)
{
	this->temp = temp;
	PrintTemp();
}

void AirConditioner::UpTemp()
{
	++temp;
	PrintTemp();
}

void AirConditioner::DownTemp()
{
	--temp;
	PrintTemp();
}

void AirConditioner::PrintTemp()
{
	cout << "온도 : " << temp << endl;
}
