#pragma once
// 컴파일러에게 해당 헤더 파일이 한 번만 빌드되도록

// .h : 클래스의 선언(인스턴스 필드, 메서드 선언)을 담습니다.
// .cpp : 클래스의 정의(인스턴스 메서드 정의)를 담습니다.

// 객체 지향 프로그래밍의 특성
// 은닉성(캡슐화), 상속성, 다형성

// 은닉성
// 값의 보호를 위하여 인스턴스의 필드, 메서드를
// 필요에 의해 감추거나 공개하는 것 등을 의미
// 객체 지향 프로그래밍에서는 클래스의 사용자에게
// 필요한 최소의 기능만 노출시키고, 내부를 감추도록 요구
// -> 접근 제어자 사용

// 캡슐화
// 클래스를 정의할 때, 관련있는 데이터 및 기능를 하나로 묶는 것을 의미
// 이렇게 캡슐화를 사용함으로써 정보 은닉도 함께 가져오는 효과를 얻을 수 있음
// 은닉성과는 다른 뜻이지만, 비슷한 의미로 간주 되기도 한다.

// 상속성
// 클래스 간의 계층 관계를 가질 수 있음
// 부모 클래스가 가지고 있는 것을 자식 클래스가 물려받아
// 같이 공유하며, 나아가 확장하는 개념을 의미
// 기존의 코드를 재사용하거나 재정의하여 코드의 생산성을 높일 수 있음
// -> 클래스 간의 공통점을 찾아서, 일반화시켜 개발 생산성을 높인다.

// 다형성
// 같은 타입이지만, 실행 결과가 다양한 객체를 이용할 수 있는 성질을 의미
// 다형성을 이용하여, 한 타입의 변수로 여러 타입의 객체를 제어할 수 있음

// 부모 클래스 -> 포유류
// 포유를 상속받는 자식 클래스 -> 개, 고양이, 인간

// 포유류* my포유류 = new 포유류[3];
// 포유류[0] = new 개;
// 포유류[1] = new 고양이;
// 포유류[2] = new 인간;

// 공통된 기능을 연속된 공간을 통해 전부 호출할 수 있음
// for (int i = 0; i < 포유류 배열 길이; ++i)
// {
//		포유류[i].체온유지기능();
//      포유류[i].수유기능();
// }


// 접근제어자 종류
// public
// 클래스/구조체의 내부/외부 모든 곳에 접근 가능
// 구조체에서 접근 제어자를 명시하지 않았을 때, 기본 값

// protected
// 클래스/구조체의 외부에서는 접근하지 못하지만
// 자기 내부와 파생된 클래스/구조체에서 접근가능

// private
// 클래스/구조체 내부에서만 접근 가능
// 파생 클래스/구조체, 외부에서 모두 접근 불가능
// 클래스에서 접근 제어자를 명시하지 않았을 때, 기본 값

#include <iostream>
#include <string>
using namespace std;

class Human
{
public:
	enum Gender { Man, Woman };

private:
	string name;
	Gender gender;
	int age;

public:
	// 필드 정보 초기화 기능
	void InitInfo(string name, Gender gender, int age);

	// 정보 출력 기능
	void PrintInfo();
};

