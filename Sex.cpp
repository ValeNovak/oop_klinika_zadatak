/**
 * Project Untitled
 */

#include "Sex.h"

/**
 * Sex implementation
 */

/**
 * @return std::string
 */
std::string Sex::get_spol() { return spolovi[stype]; }

/**
 * @return unsigned short
 */
unsigned short Sex::get_spol_ind() { return stype; }

void Sex::set_spol(unsigned int id) {
  if (id >= spolovi.size()) {
    stype = 0;
  }
  stype = id;
}

unsigned int Sex::dohvati_id_spola(std::string &spol) {
  for (int i = 0; i < spolovi.size(); ++i) {
    if (spolovi[i] == spol) {
      return i;
    }
  }
  return 0;
}
