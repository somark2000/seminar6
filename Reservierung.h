#pragma once
#include "Kunde.h"
#include "Auto.h"

class Reservierung
{
private:
	Kunde person;
	Auto aut;
	int anzahl_tage;
	int info;

public:
	Reservierung(Kunde person, Auto aut, int anzahl_tage);
	
	Kunde get_person();
	
	Auto get_auto();
	
	int get_tage();

	void set_person(Kunde pers);

	void set_auto(Auto a);
	
	void set_tage(int tage);

	void set_info(int inf);
};
