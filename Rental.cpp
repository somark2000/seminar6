#include "Rental.h"

Rental::Rental()
{

}

void Rental::reserve_auto(Kunde pers, Auto au, int tage)
{
	reserv.push_back(Reservierung(pers, au, tage));
}

void Rental::return_auto(Kunde person, Auto aut) 
{
	for (int i = 0; i < reserv.size(); i++)
	{
		if (person == reserv[i].get_person() && aut == reserv[i].get_auto())
			reserv[i].set_info(2);
	}

}

void Rental::extend_reservation(Kunde person, Auto aut) 
{
	for (int i = 0; i < reserv.size(); i++)
	{
		if (person == reserv[i].get_person() && aut == reserv[i].get_auto())
			reserv[i].set_info(1);
	}
}
