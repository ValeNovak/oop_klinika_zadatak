/**
 * Project Untitled
 */


#ifndef _TERMIN_H
#define _TERMIN_H

#include "Status_termina.h"
#include "Usluga.h"
#include "Doktor.h"
#include "Pacijent.h"
#include "Vremenska_oznaka.h"

class Termin {
public: 
    
/**
 * @param new_s
 */
void setStatus(Status_termina new_s);
    
Usluga getUsluga();
    
/**
 * @param value
 */
void setUsluga(Usluga value);
    
Doktor getDoktor();
    
/**
 * @param value
 */
void setDoktor(Doktor value);
    
Pacijent getPacijent();
    
/**
 * @param value
 */
void setPacijent(Pacijent value);
    
Vremenska oznaka getVrijeme();
    
/**
 * @param value
 */
void setVrijeme(Vremenska oznaka value);
private: 
    Usluga usluga;
    Doktor doktor;
    Pacijent pacijent;
    Vremenska oznaka vrijeme;
    Status_termina status;
};

#endif //_TERMIN_H