/**
 * Project Untitled
 */

#include "Datum.h"

Datum::Datum(unsigned short dan, unsigned short mjesec, unsigned short godina) {
  this->dan = dan;
  this->mjesec = mjesec;
  this->godina = godina;
}

unsigned short Datum::getDan() { return this->dan; };
unsigned short Datum::getMjesec() { return this->mjesec; };
unsigned short Datum::getGodina() { return this->godina; };

/**
 * Datum implementation
 */
