#include <iostream>
#include "Budynek.h"

Budynek::Budynek() {}

Budynek::~Budynek() {}

void Budynek::Wypisanie() {
	cout << "Budynek :: Wypisanie (metoda wirtualna) " << endl;
}

void Budynek::WypisujePola() {
	cout << "Podatek budynku wynosi: " << podatek << endl;
	cout << "Adres budynku: " << adres << endl;
}

Budynek::Budynek(int podatek, string adres) {
	this->podatek = podatek;
	this->adres = adres;
}

Budynek::Budynek(int ilosc_pieter) {
	this->ilosc_pieter = ilosc_pieter;
}

ostream& operator<<(ostream& wyjscie, const Budynek& b) {
	&Nieruchomosc::operator<<;
	cout << "\nBudynek :: Operator << " << endl;
	wyjscie << b.ilosc_pieter << endl;
	return wyjscie;
}

istream& operator>>(istream& wejscie, Budynek& b) {
	&Nieruchomosc::operator>>;
	cout << "\nSilownia :: Operator >>" << endl;
	wejscie >> b.ilosc_pieter;
	return wejscie;
}  