/**
 * Project Untitled
 */

#include "Racun.h"

/**
 * Racun implementation
 */

Racun::Racun(Termin *termin) {
  placeno = false;
  this->termin = termin;
}

void Racun::podmiren() { placeno = true; }

Termin *Racun::getTermin() { return termin; }
