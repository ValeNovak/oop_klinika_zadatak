/**
 * Project Untitled
 */


#ifndef _OSOBA_H
#define _OSOBA_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <vector>
#include "Datum.h"
#include "Sex.h"

class Osoba {
public: 
    
std::string getIme();
    
/**
 * @param new_i
 */
void setIme(std::string new_i);
    
std::string getPrezime();
    
/**
 * @param new_p
 */
void setPrezime(std::string new_p);
    
std::string getOib();
    
/**
 * @param new_o
 */
void setOib(std::string new_o);
    
std::string getSpol();
    
/**
 * @param new_s
 */
void setSpol(std::string new_s);
    
std::string getDatumRodjena();
    
/**
 * @param new_d
 */
void setDatumRodjena(std::string new_d);
    
std::string getAdresa();
    
/**
 * @param new_a
 */
void setAdresa(std::string new_a);
    
std::string getEmail();
    
/**
 * @param new_e
 */
void setEmail(std::string new_e);
    
/**
 * @param izbor
 * @param new
 */
void promijeniPodatak(int izbor, std::string nova_vrijednost);
protected: 
    std::string ime;
    std::string prezime;
    std::string oib;
    Sex spol;
    Datum datumRodjenja;
    std::string adresa;
    std::string email;
};

#endif //_OSOBA_H