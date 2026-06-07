/**
 * Project Untitled
 */


#ifndef _KLINIKA_H
#define _KLINIKA_H

#include <string>

class Klinika {
public: 

    
std::string getNaziv();
    
/**
 * @param new_n
 */
void setNaziv(std::string new_n);
    
std::string getAdresa();
    
/**
 * @param new_a
 */
void setAdresa(std::string new_a);
private: 
    std::string naziv;
    std::string adresa;
};

#endif //_KLINIKA_H