#include <iostream>
#include <string>
#include "Silownia.h"

using namespace std;

int main() {
	cout << Silownia::getLiczba_klientow() << endl;
	Silownia Klient1;
	cout << Silownia::getLiczba_klientow() << " - ilosc klientow obecnych" << endl;
	Silownia* Klient2 = new Silownia;
	cout << Silownia::getLiczba_klientow() << " - ilosc klientow obecnych" << endl;
	delete Klient2;
	cout << Silownia::getLiczba_klientow() << " - ilosc klientow obecnych" << endl;

	Silownia silownia;
	silownia.Wypisz("ProFit");

	Silownia Bieznia("Fitness Magna Pro", "Italy");

	Silownia klient1("Ola",24);
	Silownia klient2 = klient1; //konstruktor kopiuj¹cy

	Silownia* nowyKlient = new Silownia;
	nowyKlient->Wypisz("Markus", 22);
	delete nowyKlient;

	return 0;
}