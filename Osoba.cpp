/**
 * Project Untitled
 */

#include "Osoba.h"
#include <string>

/**
 * Osoba implementation
 */

/**
 * @return std::string
 */
std::string Osoba::getIme() { return ime; }

/**
 * @param new_i
 */
void Osoba::setIme(std::string new_i) { ime = new_i; }

/**
 * @return std::string
 */
std::string Osoba::getPrezime() { return prezime; }

/**
 * @param new_p
 */
void Osoba::setPrezime(std::string new_p) { prezime = new_p; }

/**
 * @return std::string
 */
std::string Osoba::getOib() { return oib; }

/**
 * @param new_o
 */
void Osoba::setOib(std::string new_o) { oib = new_o; }

/**
 * @return std::string
 */
std::string Osoba::getSpol() { return spol.get_spol(); }

/**
 * @param new_s
 */
void Osoba::setSpol(std::string new_s) {
  unsigned int spol = Sex::dohvati_id_spola(new_s);
  this->spol = Sex();
  this->spol.set_spol(spol);
}

/**
 * @return std::string
 */
Datum Osoba::getDatumRodjena() { return datumRodjenja; }

/**
 * @param new_d
 */
void Osoba::setDatumRodjena(Datum datum) { this->datumRodjenja = datum; }

/**
 * @return std::string
 */
std::string Osoba::getAdresa() { return adresa; }

/**
 * @param new_a
 */
void Osoba::setAdresa(std::string new_a) { adresa = new_a; }

/**
 * @return std::string
 */
std::string Osoba::getEmail() { return email; }

/**
 * @param new_e
 */
void Osoba::setEmail(std::string new_e) { email = new_e; }

void Osoba::ispisi_info() {
  std::cout << "Ime :" << ime << std::endl;
  std::cout << "Prezime :" << prezime << std::endl;
  std::cout << "Oib :" << oib << std::endl;
  std::cout << "Adresa" << adresa << std::endl;
}
