#include "Human.h"

void main()
{
	Human human;

	// age�� private ���� ����Ǿ����Ƿ�,
	// human Ŭ���� �ܺο��� ���� �Ұ�
	// human.age 

	// �Ʒ��� �޼������ public���� ����Ǿ����Ƿ�,
	// Ŭ���� �ܺο��� ���� ����
	human.InitInfo("ö��", Human::Gender::Man, 10);
	human.PrintInfo();
}