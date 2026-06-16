/**
 * Project Untitled
 */

#ifndef _TERMIN_H
#define _TERMIN_H

#include "Doktor.h"
#include "Pacijent.h"
#include "Status_termina.h"
#include "Usluga.h"
#include "Vremenska_oznaka.h"

class Termin {
public:
  /**
   * @param new_s
   */
  void setStatus(std::string status);

  Usluga *getUsluga();

  /**
   * @param value
   */
  void setUsluga(Usluga value);

  Doktor *getDoktor();

  /**
   * @param value
   */
  void setDoktor(Doktor *value);

  Pacijent *getPacijent();

  /**
   * @param value
   */
  void setPacijent(Pacijent *value);

  Vremenska_oznaka *getVrijeme();

  /**
   * @param value
   */
  void setVrijeme(Vremenska_oznaka value);

  void ispisiInfo();

  Termin();

private:
  Usluga usluga;
  Doktor *doktor;
  Pacijent *pacijent;
  Vremenska_oznaka vrijeme;
  Status_termina status;
};

#endif //_TERMIN_H
