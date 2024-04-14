
#include <iostream>

#include "Human.h"
#include "Apartment.h"

int main()
{
	Human a("Nikita", 15);
	Human c = a;
	Human* humans = new Human[3]{ a, {"Misha", 18}, c};
	
	a.print();
	humans[1].print();
	c.print();

	a.getOlder(humans[1]).print();

	Apartment apartementA(15.2f, 5);
	apartementA.print();

	Apartment apartementB(50.f, 3, 3, humans);
	apartementB.print();
}