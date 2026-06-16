/**
 * Project Untitled
 */

#ifndef _VREMENSKA_OZNAKA_H
#define _VREMENSKA_OZNAKA_H

#include "Datum.h"

class Vremenska_oznaka {
private:
  Datum datum;
  int sat;
  int minuta;

public:
  Vremenska_oznaka() = default;
  void postaviVrijeme(Datum datum, int sat, int minuta);
  bool daliJeVrijemeIsto(Datum datum, int sat, int minuta);
  bool daliJeVrijemeIsto(Vremenska_oznaka Vremenska_oznaka);
  Datum getDatum();
  void ispisiVrijeme();
};

#endif //_VREMENSKA_OZNAKA_H
