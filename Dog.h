#pragma once

// 객체지향 프로그래밍에서는 은닉성을 지켜가며 프로그래밍
// 클래스의 필드는 은닉성을 지키기 위하여
// 외부에 굳이 노출시킬 필요가 없는 필드는 private으로 설정

// 만약 외부에서 사용할 일이 있다면
// public으로 선언된 함수를 통해 데이터 읽기/쓰기 작업
// -> 읽기 용도는 접근자(Getter), 쓰기 용도는 설정자(Setter)

#include <iostream>
#include <string>
using namespace std;

class Dog
{
private:
	int age;
	string name;

public:
	// age에 대한 getter, setter
	// 관습적으로 네이밍 시, 접두어로 Get, Set을 붙임
	int GetAge() { return age; }
	void SetAge(int value) { age = value; }

	string GetName() { return name; }
	void SetName(string value) { name = value; }
};

