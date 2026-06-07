/**
 * Project Untitled
 */


#ifndef _PACIJENT_H
#define _PACIJENT_H

#include "Osoba.h"
#include <vector>
using namespace std;

class Termin;

class Pacijent: public Osoba {
public: 
    Pacijent();
    
	vector<Termin> getPovijest();
    
	unsigned int getBrojKartona();
private: 
	static unsigned int generator=0;
    unsigned int brojKartona;
    vector<Termin> povijest;
};

#endif //_PACIJENT_H