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
void Termin::setStatus(std::string status) { this->status.setStatus(status); }

/**
 * @return Usluga
 */
Usluga *Termin::getUsluga() { return &usluga; }

/**
 * @param value
 */
void Termin::setUsluga(Usluga value) { this->usluga = value; }

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

  vrijeme.ispisiVrijeme();
  std::cout << "Doktor -----" << std::endl;
  doktor->ispisiInfo();
  std::cout << "\nPacijent ----" << std::endl;
  pacijent->ispisiInfo();
  std::cout << "\nUsluga : " << usluga.getNaziv() << "   " << usluga.getCijena()
            << " eur " << std::endl;
  std::cout << "Termin status : " << status.get_status_string() << std::endl;
}
