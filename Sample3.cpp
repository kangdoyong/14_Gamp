#include "Sample3.h"

Sample3::Sample3()
{
	v1 = 0;
	v2 = 0;

	test = new string("안녕");
	tag = new char[256];
	strcpy(tag, "하세요");
}

Sample3::~Sample3()
{
	// 동적할당한 필드가 존재하므로, 객체가 파괴될 때
	// 동적할당했던 공간을 해제해준다.
	// 해제하지 않을 시, 동적할당 했던 공간의 주소값을 더 이상 알 수 없으므로
	// 메모리 누수로 이어진다.

	// test에 어떤 주소값이 존재한다면
	if (test)
		delete test;

	// tag에 어떤 주소값이 존재한다면
	if (tag)
	{
		delete[] tag;
		tag = nullptr;
	}
}

Sample3::Sample3(const Sample3& instance)
	: Sample3() // 생성자가 먼저 호출되도록 하여 멤버를 초기화시킴
{
	// 값 타입끼리의 대입 연산
	v1 = instance.v1;
	v2 = instance.v2;

	// 포인터끼리의 대입 연산
	// tag = instance.tag;
	// test = instance.test;

	// 위와 같은 경우, 얕은 복사가 일어남
	
	// 얕은 복사란?
	// 포인터가 가리키는 데이터는 빼놓고, 피상적으로 포인터 변수의 값 (주소)
	// 주소를 복사하여 멤버 대 멤버의 복사를 수행하는 것을 의미
	// 1. 주소값을 대입 받으면서, 이전에 동적할당 했던 공간의 주소를 잃어버린다.
	//    -> 메모리 누수로 이어짐
	// 2. 두 객체의 필드가 동일한 주소를 나타내게 되므로, 데이터가 연동된다.

	// 깊은 복사란?
	// 포인터 변수 값만 피상적으로 복제하지 않고,
	// 그 변수의 맥락에 맞게 연관된 데이터를 온전하게 복사하는 것을 의미

	if (tag)
	{
		strcpy(tag, instance.tag);
	}

	*test = *instance.test;
}

void Sample3::Print()
{
	cout << "v1 = " << v1 << endl;
	cout << "v2 = " << v2 << endl;

	if (tag)
		cout << "tag = " << tag << endl;

	if (test)
		cout << "test = " << *test << endl;
}
