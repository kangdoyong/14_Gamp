#include <iostream>
using namespace std;

struct Player
{
	// ex) �ʵ带 30~40�� ���
	//     �� ��, 20�� ������ �ʵ尡 ���� ������ ������
	//     20���� �ʵ带 ���� ����ϴ� ��찡 ����

	// ����ü ���ο� �� �ٸ� ����ü ������ ���� ����
	struct Stats
	{
		int atk;
		int def;
	};

	string name;
	int level;
	// ����ü Player�� �ν��Ͻ� �ʵ� stats ����
	Stats stats;

	// ����ü ���ο� ����� �Լ��� �ܺη� �� �� ����
	// -> ����� ���Ǹ� �и�
	void PrintStats();
};

void Player::PrintStats()
{
	cout << "���ݷ� : " << stats.atk << endl;
	cout << "���� : " << stats.def << endl;
}
