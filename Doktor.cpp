/**
 * Project Untitled
 */

#include "Doktor.h"
#include "Termin.h"

/**
 * Doktor implementation
 */

/**
 * @return Termin
 */

void Doktor::dodajTermin(Termin *termin) { raspored.push_back(termin); }

bool Doktor::jeliDoktorSlobodan(Vremenska_oznaka vremenska_oznaka) {

  for (int i = 0; i < raspored.size(); ++i) {
    if (vremenska_oznaka.daliJeVrijemeIsto(*raspored[i]->getVrijeme())) {
      return false;
    }
  }
  return true;
}
