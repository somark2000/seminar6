#include "Reservierung.h"

Reservierung::Reservierung(Kunde pers, Auto a, int tage)
{
	person = pers;
	aut = a;
	anzahl_tage = tage;
	info = 0;

}

Kunde Reservierung::get_person() {
	return person;
}

Auto Reservierung::get_auto() {
	return aut;
}

int Reservierung::get_tage() {
	return anzahl_tage;
}

void Reservierung::set_person(Kunde pers) {
	person = pers;
}

void Reservierung::set_auto(Auto a) {
	aut = a;
}

void Reservierung::set_tage(int tage) {
	anzahl_tage = tage;
}

void Reservierung::set_info(int inf) {
	info = inf;
}

