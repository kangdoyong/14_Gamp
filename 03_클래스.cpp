#include "Dog.h"

void main()
{
	Dog* myDog = new Dog;

	myDog->SetAge(3);
	myDog->SetName("�۸���");

	cout << "�̸� : " << myDog->GetName() << endl;
	cout << "���� : " << myDog->GetAge() << endl;

	delete myDog;
	myDog = nullptr;
}