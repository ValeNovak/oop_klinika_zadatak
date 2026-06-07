#include <iostream>
#include "Recepcija.h"
#include "Klinika.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Klinika ostojic;
	
	ostojic.setNaziv("Ostojic");
	
	Recepcija recepcija(&ostojic);
	
	
	
	return 0;
}