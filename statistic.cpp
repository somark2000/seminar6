#include "statistic.h"

using namespace std;

statistic::statistic()
{
	avg = 0;
	for (int i = 0; i < 100; i++)
	{
		popularty[i] = 0;
	}
}

void statistic::get_avg(vector<Reservierung> r)
{
	for (int i = 0; i < r.size(); ++i)
	{
		avg += r[i].get_tage();
	}
	avg /= r.size();
	cout << avg;
}

void statistic::get_most_popular(vector<Reservierung> r)
{
	for (int i = 0; i < r.size(); ++i)
	{
		popularty[r[i].get_auto().get_Id()]++;
	}
	int id,p=0;
	for (int i = 0; i < 100; ++i)
	{
		if (popularty[i] > p)
			id = i;
	}
	cout << id;
}