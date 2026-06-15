/**
 * Project Untitled
 */

#include "Vremenska_oznaka.h"
#include <iostream>

void Vremenska_oznaka::postaviVrijeme(Datum datum, int sat, int minuta) {

  this->datum = datum;
  this->sat = sat;
  this->minuta = minuta;
}

bool Vremenska_oznaka::daliJeVrijemeIsto(Datum datum, int sat, int minuta) {

  unsigned short danZaUsporediti = datum.getDan();
  unsigned short mjesecZaUsporediti = datum.getMjesec();
  unsigned short godinaZaUsporediti = datum.getGodina();

  unsigned short dan = this->datum.getDan();
  unsigned short mjesec = this->datum.getMjesec();
  unsigned short godina = this->datum.getGodina();

  if (danZaUsporediti == dan && mjesecZaUsporediti == mjesec &&
      godinaZaUsporediti == godina) {

    std::cout << "Godina je ista" << std::endl;
    if (sat == this->sat && minuta == this->minuta) {
      std::cout << "Vrijeme je isto" << std::endl;
      return true;
    }
  }

  return false;
}

bool Vremenska_oznaka::daliJeVrijemeIsto(Vremenska_oznaka Vremenska_oznaka) {

  Datum datum = Vremenska_oznaka.getDatum();
  unsigned short danZaUsporediti = datum.getDan();
  unsigned short mjesecZaUsporediti = datum.getMjesec();
  unsigned short godinaZaUsporediti = datum.getGodina();

  unsigned short dan = this->datum.getDan();
  unsigned short mjesec = this->datum.getMjesec();
  unsigned short godina = this->datum.getGodina();

  if (danZaUsporediti == dan && mjesecZaUsporediti == mjesec &&
      godinaZaUsporediti == godina) {

    std::cout << "Godina je ista" << std::endl;
    if (sat == this->sat && minuta == this->minuta) {
      std::cout << "Vrijeme je isto" << std::endl;
      return true;
    }
  }
  return false;
}

Datum Vremenska_oznaka::getDatum() { return this->datum; }
/**
 * Vremenska_oznaka implementation
 */
