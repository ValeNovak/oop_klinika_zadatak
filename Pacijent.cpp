/**
 * Project Untitled
 */

#include "Pacijent.h"
#include "Doktor.h"
#include "Recepcija.h"
#include "Termin.h"
/**
 * Pacijent implementation
 */

Pacijent::Pacijent() {
  this->brojKartona = generator;
  ++generator;
}

/**
 * @return vector<Termin>
 */
vector<Termin> *Pacijent::getPovijest() { return &povijest; }

/**
 * @return unsigned int
 */
unsigned int Pacijent::getBrojKartona() { return this->brojKartona; }
