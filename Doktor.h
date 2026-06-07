/**
 * Project Untitled
 */


#ifndef _DOKTOR_H
#define _DOKTOR_H

#include <vector>
#include "Osoba.h"
#include "Termin.h"

using namespace std;


class Doktor: public Osoba {
public: 
    vector<Termin> rasporedPacijenata;
    
Termin provedbaTermina();
private: 
    Specijalizacija specijalizacija;
};

#endif //_DOKTOR_H