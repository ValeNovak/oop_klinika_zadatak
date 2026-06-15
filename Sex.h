/**
 * Project Untitled
 */

#ifndef _SEX_H
#define _SEX_H

#include <string>
#include <vector>

using namespace std;

class Sex {
public:
  std::string get_spol();

  void set_spol(unsigned int id);

  unsigned short get_spol_ind();

  static unsigned int dohvati_id_spola(const std::string &spol);

private:
  inline static const vector<std::string> spolovi = {"zensko", "musko"};
  unsigned short stype;
};

#endif //_SEX_H
