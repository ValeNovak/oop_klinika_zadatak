/**
 * Project Untitled
 */

#ifndef _SPECIJALIZACIJA_H
#define _SPECIJALIZACIJA_H

#include <string>
#include <vector>
using namespace std;

class Specijalizacija {
public:
  unsigned short get_specijalizacija_ind();

  static unsigned int
  dohvati_id_specijalizacije(const std::string &specijalizacija);

private:
  inline static const vector<std::string> vrsta = {"proteticar", "kirurg",
                                                   "ortodont"};
  unsigned short rtype;
};

#endif //_SPECIJALIZACIJA_H
