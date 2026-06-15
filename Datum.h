/**
 * Project Untitled
 */

#ifndef _DATUM_H
#define _DATUM_H

class Datum {
private:
  unsigned short dan;
  unsigned short mjesec;
  unsigned short godina;

public:
  Datum() = default;
  Datum(unsigned short dan, unsigned short mjesec, unsigned short godina);

  unsigned short getDan();
  unsigned short getMjesec();
  unsigned short getGodina();
};

#endif //_DATUM_H
