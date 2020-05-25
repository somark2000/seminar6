#include "Kunde.h"
#include "Auto.h"
#include <vector>

Kunde::Kunde(int id, string name)
{
	Id = id;
	Name = name;
}
Kunde::Kunde() {

}
Kunde::~Kunde(){}

bool Kunde::operator==(const Kunde& kunde) const { //garantez ca nu modifica
	return Id == kunde.get_Id() && Name == kunde.get_Name();
}



