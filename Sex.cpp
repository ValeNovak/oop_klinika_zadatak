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

unsigned int Sex::dohvati_id_spola(const std::string &spol) {
  for (size_t i = 0; i < spolovi.size(); ++i) {
    if (spolovi[i] == spol) {
      return static_cast<int>(i);
    }
  }
  return 0;
}
