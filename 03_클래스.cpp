#include "Dog.h"

void main()
{
	Dog* myDog = new Dog;

	myDog->SetAge(3);
	myDog->SetName("∏€∏€¿Ã");

	cout << "¿Ã∏ß : " << myDog->GetName() << endl;
	cout << "≥™¿Ã : " << myDog->GetAge() << endl;

	delete myDog;
	myDog = nullptr;
}