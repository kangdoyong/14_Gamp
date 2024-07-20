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

	// 클래스는 복사 생성자를 명시적으로 정의하지 않았을 경우
	// 기본 복사 생성자를 제공
	// const 객체타입&
	// -> const 키워드 사용 이유
	//    함수 내부에서 매개변수로 전달된 객체의 변경을 막기 위해서
	Sample3(const Sample3& instance);

	void Print();
};

