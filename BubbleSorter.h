#pragma once
#include <vector>
#include "Auto.h"
#include "Sorter.h"

//strategy class
class BubbleSorter:public Sorter
{
	void sort(vector<Auto*> &autos);
};