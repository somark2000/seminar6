#include "AutoController.h"
#include "utils.h"

using namespace std;
AutoController::AutoController()
{
	arepo = AutoInMemoryRepository();
	save_Aut(new Auto(1, "Audi", "A7"));
	save_Aut(new Auto(2, "Mercedes", "SLA"));
	save_Aut(new Auto(3, "BMW", "S9"));
	save_Aut(new Auto(4, "VW", "Polo"));
	save_Aut(new Auto(5, "Tesla","E"));
}

AutoController* AutoController::instanz = NULL;

/*
AutoController::AutoController(AutoInMemoryRepository arepo)
{
	this->arepo = arepo;
}*/

void AutoController::save_Aut(Auto* a) {
	arepo.add(a);
}

AutoController* AutoController::return_instanz()
{
	if (instanz == NULL)
		instanz = new AutoController();

	return instanz;
}
/*
bool AutoController::sortieren()
{
	bool ok = false;
	for (int i = 0; i < arepo.autos.size(); ++i)
	{
		for (int j = 0; j < arepo.autos.size(); ++j)
		{
			if (arepo.autos[i]->get_Marke() > arepo.autos[j]->get_Marke())
			{
				swap(arepo.autos[i], arepo.autos[j]);
				ok = true;
			}
		}
	}
	return ok;
}
*/


Auto* AutoController:: findAutoByld(int id)
{
	return arepo.findOne(id);	
}

vector <Auto*> AutoController::findAll()
{
	return arepo.findAll();
}

Kunde AutoController::saveAuto(Auto* a)
{
	for (int i = 0; i < arepo.findAll().size(); i++)
		if (arepo.findAll().at(i)->get_Id() == a->get_Id())
			return lk[i];

}

Kunde AutoController::updateAuto(Auto* a)
{
	string name;
	cout << "Name: ";
	cin >> name;

	for (int i = 0; i < arepo.findAll().size(); i++)
		if (arepo.findAll().at(i)->get_Id() == a->get_Id())
		{
			arepo.findAll().at(i)->set_Marke(name) ; 
			cout << arepo.findAll().at(i)->get_Marke()<<endl;
			return lk[i];
		}

}

Kunde AutoController::deleteAuto(Auto* a)
{
	for (int i = 0; i < arepo.findAll().size(); i++)
		if (arepo.findAll()[i]->get_Id() == a->get_Id())
		{
			arepo.del(a->get_Id());
			Kunde kunde = lk[i];
			lk.erase(lk.begin() + i);
			return kunde;
		}

}

void AutoController::sort_autos()
{
	//sort(arepo.autos.begin(), arepo.autos.end(),sort_by_marke());
	sorter->sort(arepo.autos);
}

void AutoController::set_Sorter(Sorter* srt)
{
	sorter = srt;
}