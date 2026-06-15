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
public:
  vector<Termin> listaTermina;
  vector<Racun> listaRacuna;
  Klinika *klinika;
  vector<Doktor> listaDoktora;
  vector<Pacijent> listaPacijenata;
  Recepcija(Klinika *klinka);

  inline static std::map<std::string, float> usluge = {
      {"Pregled", 50.00},
      {"Čišćenje kamenca", 80.00},
      {"Vađenje zuba", 100.00}};
  /**
   * @param usluga
   * @param oib_pacijenta
   * @param vrijeme
   * @param status_termina
   */
  bool zakaziTermin(std::string usluga, std::string oib_pacijenta,
                    Vremenska_oznaka vrijeme);

  /**
   * @param pacijent
   * @param vrijeme
   */
  void otkaziTermin(Pacijent pacijent, Vremenska_oznaka vrijeme);

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
};

#endif //_RECEPCIJA_H
