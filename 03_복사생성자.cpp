#include "Sample3.h"

void main()
{
	Sample3 a;

	// 복사 생성자 호출
	Sample3 b(a);
	//Sample3 b = a;

	a.Print();

	b.Print();
}