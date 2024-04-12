
#include <iostream>

#include "Human.h"
#include "Apartment.h"

int main()
{
	Human a("Nikita", 15);
	Human b("Misha", 18);
	Human c = a;
	Human* humans = new Human[3] {a, b, c};
	
	a.print();
	b.print();
	c.print();

	a.getOlder(b).print();

	Apartment apartementA(15.2f, 5);
	apartementA.print();

	Apartment apartementB(50.f, 3, 3, humans);
	apartementB.print();
}