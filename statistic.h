#pragma once
#include "Reservierung.h"
#include <vector>
using namespace std;

class statistic
{
private:
	int popularty[100];
	int avg;

public:
	void get_most_popular(vector<Reservierung> r);
	void get_avg(vector<Reservierung> r);
	statistic();
};

