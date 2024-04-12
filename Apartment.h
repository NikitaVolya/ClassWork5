#pragma once

#include <iostream>

#include "Human.h"

class Apartment
{
private:
	float area;
	int stage;

	Human* humans;
	int numberHumans;
	
	
public:
	Apartment(float pArea, int pStage, int pNumberHumans, Human* pHumans);
	Apartment(float pArea, int pStage) : area(pArea), stage(pStage), humans(nullptr), numberHumans(0) {}
	Apartment(Apartment& pOther) : Apartment(pOther.area, pOther.stage) { setHumans(pOther.numberHumans, pOther.humans); }
	~Apartment();

	float getArea() const { return area; }
	int getStage() const { return stage; }
	const Human* getHumans() const { return humans; };

	void setArea(float pArea);
	void setStage(int pStage) { stage = pStage; }
	void setHumans(int pNumberHumans, Human* pHumans);

	void print() const;
};

