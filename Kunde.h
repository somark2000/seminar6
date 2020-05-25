#pragma once

#include <string>
using namespace std;

class Kunde
{
private:
	int Id;
	string Name;
	
public:
	Kunde();
	Kunde(int, string);

	int get_Id() const
	{
		return Id;
	}

	string get_Name() const
	{
		return Name;
	}



	void set_Id(int id)
	{
		Id = id;
	}

	void set_Name(string name)
	{
		Name = name;
	}

	bool operator==(const Kunde &kunde) const;

	~Kunde();

};

