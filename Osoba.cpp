/**
 * Project Untitled
 */


#include "Osoba.h"
#include <string>

/**
 * Osoba implementation
 */


/**
 * @return std::string
 */
std::string Osoba::getIme() {
    return ime;
}

/**
 * @param new_i
 */
void Osoba::setIme(std::string new_i) {
		ime = new_i;
}

/**
 * @return std::string
 */
std::string Osoba::getPrezime() {
    return prezime;
}

/**
 * @param new_p
 */
void Osoba::setPrezime(std::string new_p) {
			prezime = new_p;
}

/**
 * @return std::string
 */
std::string Osoba::getOib() {
    return oib;
}

/**
 * @param new_o
 */
void Osoba::setOib(std::string new_o) {
		oib = new_o;
}

/**
 * @return std::string
 */
std::string Osoba::getSpol() {
    return spol.get_spol();
}

/**
 * @param new_s
 */
void Osoba::setSpol(std::string new_s) {
		spol.set_sex(new_s);
}

/**
 * @return std::string
 */
std::string Osoba::getDatumRodjena() {
    return null;
}

/**
 * @param new_d
 */
void Osoba::setDatumRodjena(std::string new_d) {

}

/**
 * @return std::string
 */
std::string Osoba::getAdresa() {
    return adresa;
}

/**
 * @param new_a
 */
void Osoba::setAdresa(std::string new_a) {
		adresa = new_a;
}

/**
 * @return std::string
 */
std::string Osoba::getEmail() {
    return email;
}

/**
 * @param new_e
 */
void Osoba::setEmail(std::string new_e) {
		email = new_e;
}

/**
 * @param izbor
 * @param new
 */
void Osoba::promijeniPodatak(int izbor, std::string new) {
		void Osoba::promijeniPodatak()
{
    int izbor;
    std::string noviPodatak;

    std::cout << "--- Promjena podataka ---" << std::endl;
    std::cout << "1. Ime" << std::endl;
    std::cout << "2. Prezime" << std::endl;
    std::cout << "3. OIB" << std::endl;
    std::cout << "4. Spol" << std::endl;
    std::cout << "5. Datum rodenja" << std::endl;
    std::cout << "6. Adresa" << std::endl;
    std::cout << "7. Email" << std::endl;
    std::cout << "Odabir: ";

    std::cin >> izbor;
    std::cin.ignore();

    std::cout << "Unesite novi podatak: ";
    std::getline(std::cin, noviPodatak);

    switch (izbor)
    {
        case 1:
            setIme(noviPodatak);
            break;

        case 2:
            setPrezime(noviPodatak);
            break;

        case 3:
            setOib(noviPodatak);
            break;

        case 4:
            setSpol(noviPodatak);
            break;

        case 5:
            setDatumRodjena(noviPodatak);
            break;

        case 6:
            setAdresa(noviPodatak);
            break;

        case 7:
            setEmail(noviPodatak);
            break;

        default:
            std::cout << "Neispravan odabir!" << std::endl;
            return;
    }

    std::cout << "Podatak uspjesno promijenjen!" << std::endl;
}
}