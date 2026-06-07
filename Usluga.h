/**
 * Project Untitled
 */


#ifndef _USLUGA_H
#define _USLUGA_H

class Usluga {
public: 
    
std::string getNaziv();
    
/**
 * @param value
 */
void setNaziv(std::string value);
    
float getCijena();
    
/**
 * @param value
 */
void setCijena(float value);
private: 
    std::string naziv;
    float cijena;
};

#endif //_USLUGA_H