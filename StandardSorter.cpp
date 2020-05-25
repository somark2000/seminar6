#include "StandardSorter.h"
#include <vector>
#include "utils.h"
#include <algorithm>

void StandardSorter::sort(vector<Auto*> &autos)
{
	std::sort(autos.begin(),autos.end(), sort_by_marke());
}