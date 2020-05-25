#include "LKW.h"

LKW::LKW(int id, string marke, string modell, double gesamtgewicht, double bezeichnung):Auto(id, marke, modell)
{
	/*
	LKW l(1, "marca", "model", 77, 7)
	*/
	Gesamtgewicht = gesamtgewicht;
	Bezeichnung = bezeichnung;
}

void LKW::load(double x)
{
	Gesamtgewicht = Gesamtgewicht + x;
}

void LKW::unload(double x)
{
	Gesamtgewicht = Gesamtgewicht - x;
}

LKW::~LKW(){}
