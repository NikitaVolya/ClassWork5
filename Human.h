#pragma once

#include <iostream>
#include <conio.h>

class Human
{
private:
	char* name;
	unsigned int age;
public:
	Human() : name(nullptr), age(0) {}
	Human(const char* pName, const int pAge) : name(nullptr), age(pAge) { setName(pName); }
	Human(Human& pOther) : Human(pOther.name, pOther.age) {}
	~Human() { if (name) delete[] name; }

	const char* getName() const { return name; }
	int getAge() const { return age; }

	const Human& getOlder(Human& other);

	void setAge(int pAge);
	void setName(const char* pString);

	void print(const char* end = "\n") const { std::cout << "( name: " << name << ", age: " << age << " )" << end; }
};