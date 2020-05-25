#pragma once
#include "crudRepo.h"
#include <vector>
#include <iostream>
#include <algorithm>
#include "Sorter.h"

class AutoController
{

private:
	AutoController();
	static AutoController* instanz;
	Sorter* sorter;

public:
	AutoInMemoryRepository arepo;
	vector <Kunde> lk;

	//AutoController(AutoInMemoryRepository arepo);
	Auto* findAutoByld(int id);
	vector <Auto*> findAll();
	Kunde saveAuto(Auto* a);
	Kunde updateAuto(Auto* a);
	Kunde deleteAuto(Auto* a);

	void save_Aut(Auto* a);
	static AutoController* return_instanz();

	void sort_autos();
	void set_Sorter(Sorter* srt);

};

