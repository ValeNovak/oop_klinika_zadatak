/**
 * Project Untitled
 */


#ifndef _SPECIJALIZACIJA_H
#define _SPECIJALIZACIJA_H

class Specijalizacija {
public: 
    
std::string get_specijalizacija();
    
unsigned short get_specijalizacija_ind();
private: 
    static const vector<std::string> vrsta = {"proteticar","kirurg","ortodont"};
    unsigned short rtype;
};

#endif //_SPECIJALIZACIJA_H