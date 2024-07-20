#include "Human.h"

void main()
{
	Human human;

	// age는 private 으로 선언되었으므로,
	// human 클래스 외부에서 접근 불가
	// human.age 

	// 아래의 메서드들은 public으로 선언되었으므로,
	// 클래스 외부에서 접근 가능
	human.InitInfo("철수", Human::Gender::Man, 10);
	human.PrintInfo();
}