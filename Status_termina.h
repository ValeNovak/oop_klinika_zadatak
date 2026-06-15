/**
 * Project Untitled
 */

#ifndef _STATUS_TERMINA_H
#define _STATUS_TERMINA_H
#include <string>
#include <vector>
using namespace std;
class Status_termina {
public:
  unsigned short get_status_ind();

  unsigned int dohvati_id_status_termina(const std::string &status_termina);

  void setStatus(std::string status);

private:
  inline static const vector<std::string> status = {"izvrsen", "zakazan",
                                                    "otkazan"};
  unsigned short stype;
};

#endif //_STATUS_TERMINA_H
