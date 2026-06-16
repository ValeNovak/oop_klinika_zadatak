#include <bits/chrono.h>
#include <iostream>
// #include "Recepcija.h"
// #include "Klinika.h"
//

#include "Klinika.h"
#include "Recepcija.h"
#include "Vremenska_oznaka.h"

const int DOKTOR = 0;
const int PACIJENT = 1;

/* run this program using the console pauser or add your own getch,
 * system("pause") or input loop */

void ucitajDatum(unsigned int &dan, unsigned int &mjesec,
                 unsigned int &godina) {
  std::string input;
  std::cout << "Unesite datum (format: dan.mjesec.godina): ";
  std::cin >> input;

  size_t pozicija1 = input.find('.');
  size_t pozicija2 = input.find('.', pozicija1 + 1);

  dan = std::stoi(input.substr(0, pozicija1));
  mjesec = std::stoi(input.substr(pozicija1 + 1, pozicija2 - pozicija1 - 1));
  godina = std::stoi(input.substr(pozicija2 + 1));
}
void ucitajSati(unsigned int &sati, unsigned int &minute) {
  std::string input;
  std::cout << "Unesite vrijeme (format: sati:minute): ";
  std::cin >> input;

  size_t pozicija = input.find(':');

  sati = std::stoi(input.substr(0, pozicija));
  minute = std::stoi(input.substr(pozicija + 1));
}

void dodajOsobu(Recepcija *recepcija, int tip) {
  std::string ime;
  std::string prezime;
  std::string email;
  std::string oib;
  std::string adresa;
  std::string spol;

  unsigned int dan;
  unsigned int mjesec;
  unsigned int godina;

  std::cout << "Ime: ";
  std::cin >> ime;

  std::cout << "Prezime: ";
  std::cin >> prezime;

  std::cout << "Email: ";
  std::cin >> email;

  std::cout << "Oib: ";
  std::cin >> oib;

  std::cout << "Adresa: ";
  std::cin >> adresa;

  std::cout << "Spol (musko,zensko): ";
  std::cin >> spol;

  std::cout << "Datum rodenja " << std::endl;
  ucitajDatum(dan, mjesec, godina);

  Datum datum(dan, mjesec, godina);

  if (tip == DOKTOR) {
    recepcija->dodajDoktora(ime, prezime, oib, spol, datum, adresa, email);
  } else {
    recepcija->dodajPacijenta(ime, prezime, oib, spol, datum, adresa, email);
  }
}

void zakaziTermin(Recepcija *recepcija) {
  std::cout << "Izaberi pacijenta " << std::endl;

  Pacijent *pacijent = recepcija->odaberiPacijenta();

  if (pacijent != nullptr) {
    unsigned int sati;
    unsigned int minuta;
    unsigned int dan;
    unsigned int mjesec;
    unsigned int godina;

    std::cout << "Vrijeme rezervacije :" << std::endl;
    ucitajDatum(dan, mjesec, godina);
    ucitajSati(sati, minuta);

    std::string usluga;
    std::cout << "Izaberi uslugu (Pregled,Ciscenje kamenca,Vadenje zuba) : ";
    std::cin >> usluga;

    Datum datum(dan, mjesec, godina);
    Vremenska_oznaka vremenska_oznaka;
    vremenska_oznaka.postaviVrijeme(datum, sati, minuta);

    recepcija->zakaziTermin(usluga, pacijent->getOib(), vremenska_oznaka);
  }
}

int main(int argc, char **argv) {

  Klinika klinika;

  klinika.setNaziv("Ostojic - dentalna medicina");
  klinika.setAdresa("Trnava 13");
  Recepcija recepcija(&klinika);
  // Vremenska_oznaka v;
  // Datum datum(6, 3, 2026);

  int izbornik = 1;

  while (izbornik != 0) {
    std::cout << "\n\n" << std::endl;
    std::cout << "Izaberi : " << std::endl;
    std::cout << "Dodaj doktora - 1" << std::endl;
    std::cout << "Dodaj pacijenta - 2" << std::endl;
    std::cout << "Ispis sve doktore - 3" << std::endl;
    std::cout << "Rezerviraj termin - 4" << std::endl;
    std::cout << "Ispisi sve termine - 5" << std::endl;
    std::cin >> izbornik;

    switch (izbornik) {

    case 1: {
      dodajOsobu(&recepcija, DOKTOR);
      break;
    }

    case 2: {
      dodajOsobu(&recepcija, PACIJENT);
      break;
    };
    case 3: {
      recepcija.ispisiListuDoktora();
      break;
    };
    case 4: {
      std::cout << "Pokretanje procesa za zakazivanje termina ! " << std::endl;
      zakaziTermin(&recepcija);
      break;
    };
    case 5: {
      std::cout << " Lista termina  !" << std::endl;
      recepcija.ispisiListuTermina();
      std::cout << "Kraj liste termina ------------------" << std::endl;
      break;
    }
    case 6: {
      std::cout << " Izvrsi termine pod datumom !" << std::endl;

      unsigned int sati;
      unsigned int minuta;
      unsigned int dan;
      unsigned int mjesec;
      unsigned int godina;

      std::cout << "Vrijeme rezervacije :" << std::endl;
      ucitajDatum(dan, mjesec, godina);
      ucitajSati(sati, minuta);

      Datum datum(dan, mjesec, godina);
      Vremenska_oznaka vremenska_oznaka;
      vremenska_oznaka.postaviVrijeme(datum, sati, minuta);

      recepcija.izvrsiTermin(vremenska_oznaka);
      break;
    }
    }
  }

  // recepcija.dodajDoktora("Marko", "Ostojic", "8624384345", "musko", datum,
  //                        "Bedricha Smetane", "marko.ostojic@gmail.com");
  //
  // recepcija.ispisiListuDoktora();
  //
  // recepcija.dodajPacijenta("Valentina", "Novak", "1253454323", "zensko",
  // datum,
  //                          "Tijardovicecva 30", "vale.novak2b@gmail.com");
  //
  // recepcija.ispisiListuPacijenata();
  //
  // std::cout << recepcija.zakaziTermin("Pregled", "1253454323", v) <<
  // std::endl;
  //
  // recepcija.ispisiListuTermina();

  return 0;
}
