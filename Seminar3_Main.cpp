#include <iostream>
#include <cassert>
#include <assert.h>
#include "AutoController.h"
#include "Rental.h"
#include "crudRepo.h"
#include "UI.h"
#include "Sorter.h"
#include "StandardSorter.h"
#include "BubbleSorter.h"
#include "statistic.h"
using namespace std;

int main()
{
    /*
    AutoInMemoryRepository a;

    Auto *b1 = new Auto(4, "VW", "Golf");
    
    Auto *b2 = new Auto(5, "VW", "Polo");
    Auto *b3 = new Auto(6, "Audi", "A7");

    a.add(b1);
    a.add(b2);
    a.add(b3);

    //a.findAll();
    
    assert(a.findAll().size() == 3);
    cout << "merge add->findAll\n";

    assert(a.findOne(4) == b1);
    assert(a.findOne(5) == b2);
    assert(a.findOne(6) == b3);
    cout << "merge findOne\n";

    assert(a.save(b1) == b1);
    assert(a.save(b2) == b2);
    assert(a.save(b3) == b3);
    cout << "merge save\n";

    a.del(4);
    a.del(5);
    assert(a.findAll().size() == 1);
    cout << "merge del\n";

    assert(a.update(b3)==nullptr);
    assert(a.update(b2) == b2);
    cout << "merge update\n";

    UI userinterface;
    userinterface.Menu();
    */

    Rental r;
    Kunde k1 = Kunde(1, "Lari");
    Auto a1 = Auto(1, "VW", "Golf");
    Kunde k2 = Kunde(2, "Mari");
    Auto a2 = Auto(2, "VW", "Polo");
    r.reserve_auto(k1, a1, 10);
    r.reserve_auto(k2, a2, 20);
    assert(r.reserv.size() == 2);
    cout << "Merge\n";


    AutoController* ctrl=AutoController::return_instanz();
    int carealgoritm = 1;
    //if (carealgoritm == 1)
        //ctrl->sortieren();
    //if (carealgoritm == 2)
        //ctrl->sort_autos();

    cout << "Test Sorter: ";
    Sorter* bsrt=new BubbleSorter();
    Sorter* ssrt = new StandardSorter();

    ctrl->set_Sorter(bsrt);
    ctrl->sort_autos();

    vector <Auto*> autos = ctrl->findAll();
    for (int i = 0; i < autos.size(); i++)
        cout << autos[i]->get_Marke() << " ";

    statistic s;

    s.get_avg(r.reserv);
    s.get_most_popular(r.reserv);

    delete ctrl;


    return 0;
}
