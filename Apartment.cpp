#include "Apartment.h"




Apartment::Apartment(float pArea, int pStage, int pNumberHumans, Human* pHumans) : Apartment(pArea, pStage)
{
	setHumans(pNumberHumans, pHumans);
}

Apartment::~Apartment()
{
	if (humans)
		delete[] humans;
}

void Apartment::setArea(float pArea)
{
	if (pArea < 0)
	{
		std::cout << "[ Apartment INFO ] invalid area!\n";
		return;
	}
	area = pArea;
}

void Apartment::setHumans(int pNumberHumans, Human* pHumans)
{
	if (!pHumans || pNumberHumans < 0)
	{
		std::cout << "[ Apartment INFO ] invalid value for set humans!\n";
		return;
	}

	if (humans)
		delete[] humans;

	numberHumans = pNumberHumans;

	humans = new Human[pNumberHumans];
	for (int i = 0; i < pNumberHumans; i++)
		humans[i] = pHumans[i];
}

void Apartment::print() const
{
	std::cout << "Apartment | stage: " << stage << " area: " << area << " m3 humans: [ ";
	for (int i = 0; i < numberHumans; i++)
	{
		humans[i].print("");
		if (i + 1 < numberHumans)
			std::cout << ", ";
	}
	std::cout << " ]\n";
}
