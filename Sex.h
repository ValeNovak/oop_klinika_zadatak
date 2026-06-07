/**
 * Project Untitled
 */


#ifndef _SEX_H
#define _SEX_H

#include <vector>
#include <string>

using namespace std;

class Sex {
public: 
    
std::string get_spol();
    
unsigned short get_spol_ind();
private: 
    inline static const vector<std::string> vrsta = {"zensko","musko","ostalo"};
    unsigned short stype;
};

#endif //_SEX_H