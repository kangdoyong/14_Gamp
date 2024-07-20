#include "Sample.h"

void Test()
{
	cout << "Sample 정적 할당" << endl;
	Sample sample;
	// 위와 사실상 동일한 코드임,
	// 이렇게 명시적으로 생성자를 부를 수도 있음
	// 생성자는 오버로딩이 가능하므로, 생성자가 여러개 있을 경우
	// 명시적으로 특정 생성자를 호출하기 위해
	//Sample sample = Sample();
}

void main()
{
	Test();

	cout << "Sample 동적 할당" << endl;
	Sample* mySample = new Sample();

	cout << "Sample 메모리 해제" << endl;
	delete mySample;
	mySample = nullptr;
}