#include <iostream>
#include <string>
#include "Wlasciciel.h"

using namespace std;

Wlasciciel::Wlasciciel() {
#ifdef _DEBUG
	cout << "\nWlasciciel()" << endl; 
#endif
}

Wlasciciel::~Wlasciciel() {
#ifdef _DEBUG
	cout << "\n~Wlasciciel()" << endl;
#endif
}

void Wlasciciel::SetName(string n_imie, string n_nazwisko) {
	this->imie = n_imie;
	this->nazwisko = n_nazwisko;
	cout << "\nWlasciciel:" << "\nImie: " << n_imie << "\nNazwisko: " << n_nazwisko << endl;
}