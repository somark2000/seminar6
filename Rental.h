#pragma once
#include <vector>
#include <string>
#include "Kunde.h"
#include "PKW.h"
#include "LKW.h"
#include "Auto.h"
#include "Reservierung.h"

using namespace std;

class Rental
{
public:
	vector<Reservierung> reserv;
	Rental();
	void reserve_auto(Kunde pers, Auto au, int tage);
	void return_auto(Kunde person, Auto aut);
	void extend_reservation(Kunde person, Auto aut);
};