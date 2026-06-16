/**
 * Project Untitled
 */

#ifndef _OSOBA_H
#define _OSOBA_H

#include "Datum.h"
#include "Sex.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

class Osoba {
public:
  std::string getIme();

  /**
   * @param new_i
   */
  void setIme(std::string new_i);

  std::string getPrezime();

  /**
   * @param new_p
   */
  void setPrezime(std::string new_p);

  std::string getOib();

  /**
   * @param new_o
   */
  void setOib(std::string new_o);

  std::string getSpol();

  /**
   * @param new_s
   */
  void setSpol(std::string new_s);

  Datum getDatumRodjena();

  /**
   * @param new_d
   */
  void setDatumRodjena(Datum datum);

  std::string getAdresa();

  /**
   * @param new_a
   */
  void setAdresa(std::string new_a);

  std::string getEmail();

  /**
   * @param new_e
   */
  void setEmail(std::string new_e);

  void ispisiInfo();

protected:
  std::string ime;
  std::string prezime;
  std::string oib;
  Sex spol;
  Datum datumRodjenja;
  std::string adresa;
  std::string email;
};

#endif //_OSOBA_H
