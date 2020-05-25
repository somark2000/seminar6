#pragma once
#include <vector>
#include "Auto.h"

//strategy class
class Sorter
{
public:
	virtual void sort(vector<Auto*>& autos) = 0;
};