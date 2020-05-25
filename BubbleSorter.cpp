#include "BubbleSorter.h"
#include <vector>
#include "utils.h"
#include <algorithm>

void BubbleSorter::sort(vector<Auto*> &autos)
{
		for (int i = 0; i < autos.size(); ++i)
		{
			for (int j = 0; j < autos.size(); ++j)
			{
				if (autos[i]->get_Marke() > autos[j]->get_Marke())
				{
					swap(autos[i], autos[j]);
				}
			}
		}
}
