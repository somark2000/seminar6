#include "UI.h"

UI::UI()
{
	ctrl = AutoController::return_instanz();
}

UI::~UI()
{
	delete ctrl;
}

void UI::meniu(int i, AutoController* ctrl)
{

	int id;
	Auto* b1 = new Auto(1, "VW", "Golf");
	Auto* b2 = new Auto(2, "VW", "Polo");
	switch(i)
	{
	case 0:
		cout << "Exit" << endl;
		cout << endl;
		break;

	case 1:
		for (int i = 0; i < ctrl->arepo.findAll().size(); i++)
		{
			ctrl->arepo.findAll().at(i)->show_auto();
			cout << endl;
		}
		cout << "Id: "<<endl;
		cin >> id;
		ctrl->arepo.findOne(id)->show_auto();
		break;
	case 2:
		for (int i = 0; i < ctrl->arepo.findAll().size(); i++)
		{
			ctrl->arepo.findAll().at(i)->show_auto();
			cout << endl;
		}
		
		break;
	case 3:
		cout << ctrl->saveAuto(b1).get_Name();
		cout << endl;
		cout << ctrl->saveAuto(b2).get_Name();
		break;
	case 4:
		cout<<ctrl->updateAuto(b1).get_Name();
		break;
	case 5:
		cout<<ctrl->deleteAuto(b1).get_Name();
		//cout << ctrl->lk.size();
		break;
	}

}

void UI::Menu()
{
	
	Auto* m1 = new Auto(1, "VW", "Golf");
	Auto* m2 = new Auto(2, "VW", "Polo");

	ctrl->arepo.add(m1);
	ctrl->arepo.add(m2);

	Kunde c1(1, "Maria");
	Kunde c2(2, "Andrei");
	ctrl->lk.push_back(c1);
	ctrl->lk.push_back(c2);


	int option;
	do {
		cout << "\nMain Menu:" << endl;
		cout << "0. Exit" << endl;
		cout << "1. findAutoByld" << endl;
		cout << "2. findAll" << endl;
		cout << "3. saveAuto" << endl;
		cout << "4. updateAuto" << endl;
		cout << "5. deleteAuto" << endl;
		cout << "Wahlen Sie bitte eine Option: "; cin >> option; cout << endl;

		meniu(option, ctrl);

	} while (option != 0);
}
