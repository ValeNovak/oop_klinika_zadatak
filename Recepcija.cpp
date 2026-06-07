/**
 * Project Untitled
 */


#include "Recepcija.h"

/**
 * Recepcija implementation
 */
 
 /**
 * Constructor
 */
 
 Recepcija::Recepcija(Klinika* klinika){
 	this->klinika=klinika;
 }


/**
 * @param usluga
 * @param oib_pacijenta
 * @param vrijeme
 * @param status_termina
 */
void Recepcija::zakaziTermin(std::string usluga, std::string oib_pacijenta, void vrijeme, Status_termina status_termina) {

}

/**
 * @param pacijent
 * @param vrijeme
 */
void Recepcija::otkaziTermin(Pacijent pacijent, void vrijeme) {

}

/**
 * @param ime
 * @param prezime
 * @param oib
 * @param spol
 * @param datumRodjenja
 * @param adresa
 * @param email
 */
void Recepcija::dodajDoktora(std::string ime, std::string prezime, std::string oib, void spol, void datumRodjenja, std::string adresa, std::string email) {

}

/**
 * @param ime
 * @param prezime
 * @param oib
 * @param spol
 * @param datumRodjenja
 * @param adresa
 * @param email
 */
void Recepcija::dodajPacijenta(std::string ime, std::string prezime, std::string oib, void spol, void datumRodjenja, std::string adresa, std::string email) {

}