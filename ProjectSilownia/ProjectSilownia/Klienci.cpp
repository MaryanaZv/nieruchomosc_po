#include <iostream>
#include <string>
#include <fstream>
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

Klienci::Klienci(const Klienci& klient) {
	this->imie = klient.imie;
	this->wiek = klient.wiek;
	cout << "\nKlienci(const Klienci& klient)" << endl;
}

Klienci::Klienci(string imie, int wiek) {
	this->imie = imie;
	this->wiek = wiek;
	cout << "\nKlienci(string imie, int wiek)" << endl;
}

void Klienci::SetDane(string new_imie, int new_wiek) {
	this->imie = new_imie;
	this->wiek = new_wiek;
	cout << "\nDane: " << "\nImie: " << new_imie << "\nWiek: " << new_wiek << endl;
}

