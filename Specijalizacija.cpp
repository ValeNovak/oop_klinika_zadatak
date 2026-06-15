/**
 * Project Untitled
 */

#include "Specijalizacija.h"

/**
 * Specijalizacija implementation
 */

/**
 * @return std::string
 */

/**
 * @return unsigned short
 */
unsigned short Specijalizacija::get_specijalizacija_ind() { return rtype; }

unsigned int Specijalizacija::dohvati_id_specijalizacije(
    const std::string &specijalizacija) {
  for (size_t i = 0; i < vrsta.size(); ++i) {
    if (vrsta[i] == specijalizacija) {
      return i;
    }
  }
  return 0;
}
