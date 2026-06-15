/**
 * Project Untitled
 */

#include "Klinika.h"

/**
 * Klinika implementation
 */

/**
 * @return std::string
 */
std::string Klinika::getNaziv() { return this->naziv; }

/**
 * @param new_n
 */
void Klinika::setNaziv(std::string new_n) { this->naziv = new_n; }

/**
 * @return std::string
 */
std::string Klinika::getAdresa() { return this->adresa; }

/**
 * @param new_a
 */
void Klinika::setAdresa(std::string new_a) { this->adresa = new_a; }
