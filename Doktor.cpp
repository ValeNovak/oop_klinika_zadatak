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
void Doktor::provedbaTermina(Vremenska_oznaka trenutni_dan) { ; }

bool Doktor::jeliDoktorSlobodan(Vremenska_oznaka vremenska_oznaka) {

  for (Termin *termin : raspored) {
    if (vremenska_oznaka.daliJeVrijemeIsto(*termin->getVrijeme())) {
      return false;
    }
  }
  return true;
}
