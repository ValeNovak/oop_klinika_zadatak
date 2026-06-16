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

  for (int i = 0; i < listaTermina.size(); ++i) {
    if (listaTermina[i].getVrijeme()->daliJeVrijemeIsto(vrijeme)) {
      return false;
    }
  }

  Doktor *izabraniDoktor = nullptr;
  for (int i = 0; i < listaDoktora.size(); ++i) {

    if (listaDoktora[i].jeliDoktorSlobodan(vrijeme)) {
      izabraniDoktor = &listaDoktora[i];
      break;
    }
  }

  if (izabraniDoktor == nullptr) {
    return false;
  }

  Pacijent *izabraniPacijent = nullptr;
  for (int i = 0; i < listaPacijenata.size(); ++i) {

    if (listaPacijenata[i].getOib() == oib_pacijenta) {
      izabraniPacijent = &listaPacijenata[i];
      break;
    }
  }
  if (izabraniPacijent == nullptr) {
    return false;
  }
  Termin termin;
  termin.setDoktor(izabraniDoktor);
  termin.setVrijeme(vrijeme);
  termin.setUsluga(odabranaUsluga);
  termin.setPacijent(izabraniPacijent);

  listaTermina.push_back(termin);
  izabraniDoktor->dodajTermin(&listaTermina[listaTermina.size() - 1]);
  return true;
}

void Recepcija::ispisiListuTermina() {
  for (auto &termin : listaTermina) {
    termin.ispisiInfo();
  }
}

void Recepcija::ispisiListuRacuna() {
  for (auto &racun : listaIzdanihRacuna) {
    std::cout << "--Racun za termin--" << std::endl;
    racun.getTermin()->ispisiInfo();

    std::cout << "------------------------" << std::endl;
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
  std::cout << " Lista doktora  " << std::endl;
  for (auto &doktor : listaDoktora) {
    std::cout << "-----" << std::endl;
    doktor.ispisiInfo();
  }
  std::cout << "\n" << std::endl;
}

void Recepcija::ispisiListuPacijenata() {
  for (auto &pacijent : listaPacijenata) {
    std::cout << "-----" << std::endl;
    pacijent.ispisiInfo();
  }
}

Pacijent *Recepcija::odaberiPacijenta() {
  if (listaPacijenata.size() == 0) {
    return nullptr;
  }
  std::cout << "    " << std::endl;
  for (int i = 0; i < listaPacijenata.size(); ++i) {
    std::cout << "-------------------------" << std::endl;
    std::cout << "Index : " << i << std::endl;
    listaPacijenata[i].ispisiInfo();
    std::cout << "-------------\n" << std::endl;
  }

  unsigned int index;
  std::cin >> index;
  if (index >= listaPacijenata.size()) {
    return &listaPacijenata[0];
  }
  return &listaPacijenata[index];
}

void Recepcija::izvrsiTermin(Vremenska_oznaka vrijeme) {

  for (auto &termin : listaTermina) {
    if (termin.getVrijeme()->daliJeVrijemeIsto(vrijeme)) {
      termin.setStatus("izvrsen");

      Racun racun(&termin);
      racun.podmiren();
      listaIzdanihRacuna.push_back(racun);
    }
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
