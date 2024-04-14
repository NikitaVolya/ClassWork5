#include "Human.h"

const Human& Human::getOlder(Human& other) const
{
	if (other.age > age)
		return other;
	else
		return *this;
}

void Human::setAge(int pAge)
{
	if (pAge < 0)
	{
		std::cout << "[ Human INFO] invalid age!\n";
		return;
	}
	age = pAge;
}

void Human::setName(const char* pString)
{
	if (!pString)
	{
		std::cout << "[ Human INFO] invalid name!\n";
		return;
	}
	if (name)
		delete[] name;
	

	int length = std::strlen(pString) + 1;

	name = new char[length];
	for (int i = 0; i < length; i++)
		name[i] = pString[i];
}
