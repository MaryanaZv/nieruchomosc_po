#include <iostream>
#include <string>
#include "Klienci.h"

using namespace std;

Klienci::Klienci() {
#ifdef _DEBUG
	cout << "\nKlienci()" << endl;
#endif
}

Klienci::~Klienci() {
#ifdef _DEBUG
	cout << "\n~Klienci()" << endl;
#endif
}

void Klienci::SetDane(string new_imie, int new_wiek) {
	this->imie = new_imie;
	this->wiek = new_wiek;
	cout << "\nDane: " << "\nImie: " << new_imie << "\nWiek: " << new_wiek << endl;
}