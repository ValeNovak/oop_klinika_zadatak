/**
 * Project Untitled
 */

#ifndef _RECEPCIJA_H
#define _RECEPCIJA_H

#include "Doktor.h"
#include "Klinika.h"
#include "Osoba.h"
#include "Pacijent.h"
#include "Racun.h"
#include "Sex.h"
#include "Status_termina.h"
#include "Vremenska_oznaka.h"
#include <map>
#include <string>
#include <vector>

using namespace std;

class Pacijent;
class Doktor;
class Termin;
class Klinika;
class Racun;
class Vremenska_oznaka;
class Status_termina;
class Sex;

class Recepcija {
private:
  vector<Termin> listaTermina;
  Klinika *klinika;
  vector<Doktor> listaDoktora;
  vector<Pacijent> listaPacijenata;
  vector<Racun> listaIzdanihRacuna;
  Recepcija(Klinika *klinka);

public:
  inline static std::map<std::string, float> usluge = {
      {"Pregled", 50.00},
      {"Ciscenje kamenca", 80.00},
      {"Vadenje zuba", 100.00}};
  /**
   * @param usluga
   * @param oib_pacijenta
   * @param vrijeme
   * @param status_termina
   */
  bool zakaziTermin(std::string usluga, std::string oib_pacijenta,
                    Vremenska_oznaka vrijeme);

  void izvrsiTermin(Vremenska_oznaka vrijeme);

  /**
   * @param ime
   * @param prezime
   * @param oib
   * @param spol
   * @param datumRodjenja
   * @param adresa
   * @param email
   */
  void dodajDoktora(std::string ime, std::string prezime, std::string oib,
                    std::string spol, Datum datumRodjenja, std::string adresa,
                    std::string email);

  /**
   * @param ime
   * @param prezime
   * @param oib
   * @param spol
   * @param datumRodjenja
   * @param adresa
   * @param email
   */
  void dodajPacijenta(std::string ime, std::string prezime, std::string oib,
                      std::string spol, Datum datumRodjenja, std::string adresa,
                      std::string email);

  void ispisiListuDoktora();
  void ispisiListuPacijenata();
  void ispisiListuTermina();
  void ispisiListuRacuna();

  Pacijent *odaberiPacijenta();
};

#endif //_RECEPCIJA_H
