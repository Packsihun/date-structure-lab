#pragma once
#include "car.h"

class sportscar : public car 
{ 
public:
	bool bTurbo;
	void setTurbo(bool bTur) { bTurbo = bTur;  }
	void speedup() {
		if (bTurbo) speed += 20;
		else car::speedup();
	}
};