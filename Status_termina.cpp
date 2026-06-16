/**
 * Project Untitled
 */

#include "Status_termina.h"

/**
 * @return unsigned short
 */
unsigned short Status_termina::get_status_ind() { return stype; }

std::string Status_termina::get_status_string() { return status[stype]; }

void Status_termina::setStatus(std::string status) {
  stype = dohvati_id_status_termina(status);
}

unsigned int
Status_termina::dohvati_id_status_termina(std::string &status_termina) {
  for (size_t i = 0; i < status.size(); ++i) {
    if (status[i] == status_termina) {
      return i;
    }
  }
  return 0;
}
