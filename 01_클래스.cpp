#include <iostream>
using namespace std;

// 클래스란?
// 구조체와 비슷하며, 특정한 종류의 객체를 만들기 위한 수단
// 보통 구조체는 간단한 데이터 형식을 
// 클래스는 좀 더 복잡한 데이터 형식을 나타낼 때 사용
// class라는 키워드를 사용하여 선언
// 일반적으로 클래스라는 선언부(.h)와 구현부(.cpp)로 나눠 작성

class MyClass
{
	// 접근제한자 중 하나
	// public -> 외부에서 모든 멤버에 대한 접근을 허용
public:
	int variable;
	
	void Print()
	{
		cout << "Variable = " << variable << endl;
	}
};

void main()
{
	// MyClass 형식의 객체를 할당
	MyClass mc;

	// 멤버에 대한 접근 방식 구조체와 동일
	mc.variable = 10;
	mc.Print();
}

