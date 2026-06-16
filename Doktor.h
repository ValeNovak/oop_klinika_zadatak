/**
 * Project Untitled
 */

#ifndef _DOKTOR_H
#define _DOKTOR_H

#include "Osoba.h"
#include "Vremenska_oznaka.h"
#include <vector>
using namespace std;

class Termin;
class Vremenska_oznaka;

class Doktor : public Osoba {
public:
  vector<Termin *> raspored;

  bool jeliDoktorSlobodan(Vremenska_oznaka vremenska_oznaka);
  void dodajTermin(Termin *termin);

private:
};

#endif //_DOKTOR_H
