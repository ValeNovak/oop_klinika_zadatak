/**
 * Project Untitled
 */

#include "Termin.h"
#include "Status_termina.h"
#include "Vremenska_oznaka.h"

/**
 * Termin implementation
 */

/**
 * @param new_s
 */
void Termin::setStatus(Status_termina *new_s) {}

/**
 * @return Usluga
 */
Usluga *Termin::getUsluga() { return &usluga; }

/**
 * @param value
 */
void Termin::setUsluga(Usluga value) { this->usluga = usluga; }

/**
 * @return Doktor
 */
Doktor *Termin::getDoktor() { return doktor; }

/**
 * @param value
 */
void Termin::setDoktor(Doktor *doktor) { this->doktor = doktor; }

/**
 * @return Pacijent
 */
Pacijent *Termin::getPacijent() { return this->pacijent; }

/**
 * @param value
 */
void Termin::setPacijent(Pacijent *pacijent) { this->pacijent = pacijent; }

/**
 * @return Vremenska oznaka
 */
Vremenska_oznaka *Termin::getVrijeme() { return &this->vrijeme; }

/**
 * @param value
 */
void Termin::setVrijeme(Vremenska_oznaka vremenska_oznaka) {
  this->vrijeme = vremenska_oznaka;
}

Termin::Termin() { status.setStatus("zakazan"); }

void Termin::ispisiInfo() {
  std::cout << "Doktor -----" << std::endl;
  doktor->ispisi_info();
  std::cout << "\nPacijent ----" << std::endl;
  pacijent->ispisi_info();
  std::cout<<"\nUsluga ------" <<std::endl;
  std::cout<<usluga.getNaziv()<<std::endl;
}
