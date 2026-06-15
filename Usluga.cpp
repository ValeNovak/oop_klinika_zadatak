/**
 * Project Untitled
 */

#include "Usluga.h"

/**
 * Usluga implementation
 */

/**
 * @return std::string
 */
std::string Usluga::getNaziv() { return naziv; }

/**
 * @param value
 */
void Usluga::setNaziv(std::string value) { this->naziv = value; }

/**
 * @return float
 */
float Usluga::getCijena() { return cijena; }

/**
 * @param value
 */
void Usluga::setCijena(float value) { this->cijena = value; }
