#pragma once
#include "Auto.h"
#include <vector>
#include "Rental.h"
#include <iostream>
using namespace std;

/** * CRUD operations repository interface */
template <class E>

class CrudRepository{
public:
	//vector <Auto*> autos;
	virtual E findOne(int id) = 0;
	virtual vector<E> findAll() = 0;
	virtual E save(E entity) = 0;
	virtual E del(int id) = 0;
	virtual E update(E entity) = 0;
	virtual ~CrudRepository() {};
};

class AutoInMemoryRepository:public CrudRepository<Auto*>
{
	//Rental r;
	
public:
	vector <Auto*> autos;
	Auto* findOne(int id)
	{
		//cout << autos.size();
		//Auto a_null;
		for (int i = 0; i < autos.size(); i++)
			if (autos[i]->get_Id() == id)
				return autos[i];

		return nullptr; // return a_null;
		//throw exception
		//optional

	}

	vector <Auto*> findAll()
	{
		vector <Auto*> vect_autos;
		for (int i = 0; i < autos.size(); i++)
			vect_autos.push_back(autos[i]);

		return vect_autos;

		//return autos;  //that s all 
	}

	Auto* save(Auto* aut)
	{
		for (int i = 0; i < autos.size(); i++)
			if (autos[i] == aut)
				return autos[i];
		autos.push_back(aut);
		return nullptr;
	}

	Auto* del(int id)
	{
		for (int i = 0; i < autos.size(); i++)
			if (autos[i]->get_Id() == id)
			{
				Auto* temp = autos[i];
				//delete autos[i]; 
				autos.erase(autos.begin() + i); //sterge ptr ul
				return temp;
			}
		return nullptr;
	}

	Auto* update(Auto* aut)
	{
		//nu a gasit ce vreau sa modif
		if (del(aut->get_Id()) == nullptr) //nu l-a sters
			return aut; //ret entitatea

		//del(aut->get_Id());
		save(aut);
		return nullptr;

	}

	void add(Auto* aut) 
	{
		autos.push_back(aut);
	}

};

