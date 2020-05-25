#pragma once
#include <iostream>
#include <string>

using namespace std;

class Auto
{
private:
	int Id;
	string Marke, Modell;

public:
	Auto();
	Auto(int id, string marke, string modell);


	int get_Id() const
	{
		return Id;
	}
	string get_Marke() const
	{
		return Marke;
	}
	string get_Modell() const
	{
		return Modell;
	}

	void set_Id(int id)
	{
		Id = id;
	}

	void set_Marke(string marke)
	{
		Marke = marke;
	}

	void set_Modell(string modell)
	{
		Modell = modell;
	}
	void show_auto();

	bool operator==(const Auto &aut) const;

	~Auto();
};

