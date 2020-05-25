#pragma once
#include "AutoController.h"

class UI
{
private:
	AutoController* ctrl;
public:
	UI();
	~UI();
	void meniu(int i, AutoController* ctrl);
	void Menu();
};

