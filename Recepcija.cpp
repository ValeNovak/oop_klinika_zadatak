/**
 * Project Untitled
 */

#include "Recepcija.h"
#include "Doktor.h"
#include "Klinika.h"
#include "Osoba.h"
#include "Pacijent.h"
#include "Racun.h"
#include "Sex.h"
#include "Status_termina.h"
#include "Usluga.h"
#include "Vremenska_oznaka.h"
/**
 * Recepcija implementation
 */

/**
 * Constructor
 */

Recepcija::Recepcija(Klinika *klinika) { this->klinika = klinika; }

/**
 * @param usluga
 * @param oib_pacijenta
 * @param vrijeme
 * @param status_termina
 */
bool Recepcija::zakaziTermin(std::string usluga, std::string oib_pacijenta,
                             Vremenska_oznaka vrijeme) {

  if (usluge.find(usluga) == usluge.end()) {
    return false;
  }

  Usluga odabranaUsluga;
  odabranaUsluga.setNaziv(usluga);

  odabranaUsluga.setCijena(usluge.at(usluga));

  for (auto &termin : listaTermina) {
    if (termin.getVrijeme()->daliJeVrijemeIsto(vrijeme)) {
      return false;
    }
  }

  Doktor *izabraniDoktor = nullptr;
  for (auto &doktor : listaDoktora) {

    if (doktor.jeliDoktorSlobodan(vrijeme)) {
      izabraniDoktor = &doktor;
    }
  }

  if (izabraniDoktor == nullptr) {
    return false;
  }

  Pacijent *izabraniPacijent = nullptr;
  for (auto &pacijent : listaPacijenata) {

    if (pacijent.getOib() == oib_pacijenta) {
      izabraniPacijent = &pacijent;
    }
  }
  Termin termin;
  termin.setDoktor(izabraniDoktor);
  termin.setVrijeme(vrijeme);
  termin.setUsluga(odabranaUsluga);
  termin.setPacijent(izabraniPacijent);

  listaTermina.push_back(termin);
  return true;
}

void Recepcija::ispisiListuTermina() {
  for (auto &termin : listaTermina) {
    termin.ispisiInfo();
  }
}

/**
 * @param pacijent
 * @param vrijeme
 */
void Recepcija::otkaziTermin(Pacijent pacijent, Vremenska_oznaka vrijeme) {}

/**
 * @param ime
 * @param prezime
 * @param oib
 * @param spol
 * @param datumRodjenja
 * @param adresa
 * @param email
 */
void Recepcija::dodajDoktora(std::string ime, std::string prezime,
                             std::string oib, std::string spol,
                             Datum datumRodjenja, std::string adresa,
                             std::string email) {

  Doktor doktor;
  doktor.setIme(ime);
  doktor.setPrezime(prezime);
  doktor.setSpol(spol);
  doktor.setDatumRodjena(datumRodjenja);
  doktor.setOib(oib);
  doktor.setAdresa(adresa);
  doktor.setEmail(email);

  listaDoktora.push_back(doktor);
}

void Recepcija::ispisiListuDoktora() {
  for (auto &doktor : listaDoktora) {
    std::cout << "-----" << std::endl;
    doktor.ispisi_info();
  }
}

void Recepcija::ispisiListuPacijenata() {
  for (auto &pacijent : listaPacijenata) {
    std::cout << "-----" << std::endl;
    pacijent.ispisi_info();
  }
}

/**
 * @param ime
 * @param prezime
 * @param oib
 * @param spol
 * @param datumRodjenja
 * @param adresa
 * @param email
 */
void Recepcija::dodajPacijenta(std::string ime, std::string prezime,
                               std::string oib, std::string spol,
                               Datum datumRodjenja, std::string adresa,
                               std::string email) {

  Pacijent pacijent;
  pacijent.setIme(ime);
  pacijent.setPrezime(prezime);
  pacijent.setAdresa(adresa);
  pacijent.setEmail(email);
  pacijent.setSpol(spol);
  pacijent.setOib(oib);
  pacijent.setDatumRodjena(datumRodjenja);

  listaPacijenata.push_back(pacijent);
}
