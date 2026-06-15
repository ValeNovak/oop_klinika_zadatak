#include <iostream>
// #include "Recepcija.h"
// #include "Klinika.h"
//

#include "Klinika.h"
#include "Recepcija.h"
#include "Vremenska_oznaka.h"
/* run this program using the console pauser or add your own getch,
 * system("pause") or input loop */

int main(int argc, char **argv) {

  Vremenska_oznaka v;
  Datum datum(6, 3, 2026);
  v.postaviVrijeme(datum, 13, 0);

  Klinika klinika;

  klinika.setNaziv("Ostojic - dentalna medicina");
  klinika.setAdresa("Trnava 13");
  Recepcija recepcija(&klinika);

  recepcija.dodajDoktora("Marko", "Ostojic", "8624384345", "musko", datum,
                         "Bedricha Smetane", "marko.ostojic@gmail.com");

  recepcija.ispisiListuDoktora();

  recepcija.dodajPacijenta("Valentina", "Novak", "1253454323", "zensko", datum,
                           "Tijardovicecva 30", "vale.novak2b@gmail.com");

  recepcija.ispisiListuPacijenata();

  std::cout << recepcija.zakaziTermin("Pregled", "1253454323", v) << std::endl;

  recepcija.ispisiListuTermina();

  return 0;
}
