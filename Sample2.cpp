#include "Sample2.h"

Sample2::Sample2(int data)
	: a(data)
{
	// 위와 같은 초기화 방식은 직접 대입 연산하여
	// 초기화하는 방식과는 내부적인 동작이 다름
	// -> 쓰레기 값이 없이 처음부터 필드에 값을 할당할 수 있음

	// a = data;
	cout << "Sample2(int) 호출" << endl;
}

Sample2::Sample2(int data1, int data2)
	: Sample2(data1)
{
	// 위임생성자를 의미
	// 오버로딩 되어있는 자기 자신의 다른 생성자를 먼저 호출할 때 사용

	b = data2;
	cout << "Sample2(int, int) 호출" << endl;
}

Sample2::~Sample2()
{
}

void Sample2::Print()
{
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
}
