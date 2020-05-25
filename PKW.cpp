#include "PKW.h"
#include "Auto.h"

PKW::PKW(int id, string marke, string modell, string sonderaustattungen):Auto(id, marke, modell)
{
	
	Sonderaustattungen = sonderaustattungen;
}

PKW::~PKW() {}
