#include "Human.h"
// 보통 함수의 정의를 cpp에 작성하므로,
// 함수의 선언이 있는 헤더파일을 포함

void Human::InitInfo(string name, Gender gender, int age)
{
	this->name = name;
	this->gender = gender;
	this->age = age;
}

void Human::PrintInfo()
{
	cout << "이름 : " << name << endl;
	cout << "성별 : " << (gender == Man ? "남자" : "여자") << endl;
	cout << "나이 : " << age << endl;
}
