#include <iostream>
using namespace std;

struct Player
{
	// ex) 필드를 30~40개 사용
	//     이 중, 20개 정도의 필드가 서로 연관된 데이터
	//     20개의 필드를 같이 사용하는 경우가 많음

	// 구조체 내부에 또 다른 구조체 선언할 수도 있음
	struct Stats
	{
		int atk;
		int def;
	};

	string name;
	int level;
	// 구조체 Player의 인스턴스 필드 stats 선언
	Stats stats;

	// 구조체 내부에 선언된 함수를 외부로 뺄 수 있음
	// -> 선언과 정의를 분리
	void PrintStats();
};

void Player::PrintStats()
{
	cout << "공격력 : " << stats.atk << endl;
	cout << "방어력 : " << stats.def << endl;
}
