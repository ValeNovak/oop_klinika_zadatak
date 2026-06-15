/**
 * Project Untitled
 */

#ifndef _DOKTOR_H
#define _DOKTOR_H

#include "Osoba.h"
#include "Specijalizacija.h"
#include "Vremenska_oznaka.h"
#include <vector>
using namespace std;

class Termin;
class Specijalizacija;
class Vremenska_oznaka;

class Doktor : public Osoba {
public:
  vector<Termin *> raspored;

  void provedbaTermina(Vremenska_oznaka vremenska_oznaka);
  bool jeliDoktorSlobodan(Vremenska_oznaka vremenska_oznaka);
  void dodajTermin(Termin *termin);

private:
  Specijalizacija specijalizacija;
};

#endif //_DOKTOR_H
