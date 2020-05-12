#include <iostream>
#include <string>
#include <fstream>
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

Wlasciciel::Wlasciciel(string imie, string nazwisko) {
	this->imie = imie;
	this->nazwisko = nazwisko;
	cout << "\nWlasciciel(string imie, string nazwisko)" << endl;
}

Wlasciciel::Wlasciciel(const Wlasciciel& wlast) {
	this->imie = wlast.imie;
	this->nazwisko = wlast.nazwisko;
	cout << "\nWlasciciel(const Wlasciciel& wlast)" << endl;
}

void Wlasciciel::SetName(string n_imie, string n_nazwisko) {
	this->imie = n_imie;
	this->nazwisko = n_nazwisko;
	cout << "\nWlasciciel:" << "\nImie: " << n_imie << "\nNazwisko: " << n_nazwisko << endl;
}
