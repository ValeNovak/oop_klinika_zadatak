/**
 * Project Untitled
 */


#ifndef _RECEPCIJA_H
#define _RECEPCIJA_H

#include "Pacijent.h"

class Recepcija {
public: 
    Pacijent pacijenti;
    Doktor doktori;
    vector<Termin> listaTermina;
    vector<Racun> listaRacuna;
    Klinika* klinika;
    vector<Doktor> listaDoktora;
    vector<Pacijent> listaPacijenata;
    vector<Termin> listaTermina;
    vector<Termin> termin;
    
    Recepcija(Klinka* klinka);
    
    
/**
 * @param usluga
 * @param oib_pacijenta
 * @param vrijeme
 * @param status_termina
 */
void zakaziTermin(std::string usluga, std::string oib_pacijenta, Vremenska_oznaka vrijeme, Status_termina status_termina);
    
/**
 * @param pacijent
 * @param vrijeme
 */
void otkaziTermin(Pacijent pacijent, Vremenska_oznaka vrijeme);
    
/**
 * @param ime
 * @param prezime
 * @param oib
 * @param spol
 * @param datumRodjenja
 * @param adresa
 * @param email
 */
void dodajDoktora(std::string ime, std::string prezime, std::string oib, Sex spol, Datum datumRodjenja, std::string adresa, std::string email);
    
/**
 * @param ime
 * @param prezime
 * @param oib
 * @param spol
 * @param datumRodjenja
 * @param adresa
 * @param email
 */
void dodajPacijenta(std::string ime, std::string prezime, std::string oib, Sex spol, DAtum datumRodjenja, std::string adresa, std::string email);
};

#endif //_RECEPCIJA_H