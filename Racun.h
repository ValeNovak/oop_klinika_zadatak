/**
 * Project Untitled
 */

#ifndef _RACUN_H
#define _RACUN_H
#include "Termin.h"

class Racun {
public:
  Racun(Termin *termin);
  void podmiren();

  Termin *getTermin();

private:
  Termin *termin;
  bool placeno;
};

#endif //_RACUN_H
