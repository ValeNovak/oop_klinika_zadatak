/**
 * Project Untitled
 */


#ifndef _STATUS_TERMINA_H
#define _STATUS_TERMINA_H
#include <string>
#include <vector>
using namespace std;
class Status_termina {
public: 
    
std::string get_status_termina();
    
unsigned short get_status_ind();
private: 
    inline static const vector<std::string> status = {"izvrsen","zakazan","otkazan"};
    unsigned short stype;
};

#endif //_STATUS_TERMINA_H