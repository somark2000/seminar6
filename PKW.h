#pragma once

#include <string>
#include "Auto.h"

class PKW: public Auto
{
private:
	string Sonderaustattungen;
public:
	PKW(int, string, string, string);

	~PKW();
};

