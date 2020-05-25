#include "Auto.h"

Auto::Auto()
{
	Id = -1;
	Marke = "";
	Modell = "";
}

Auto::Auto(int id, string marke, string modell)
{
	Id = id;
	Marke = marke;
	Modell = modell;
}
void Auto::show_auto()
{
	cout << "Id: " << get_Id() << " Marke: " << get_Marke() << " Modell: " << get_Modell();
}

bool Auto::operator==(const Auto &aut) const  //garantez ca nu modifica
{ 
	return Id == aut.get_Id() && Marke == aut.get_Marke() && Modell == aut.get_Modell();
}

Auto::~Auto(){}