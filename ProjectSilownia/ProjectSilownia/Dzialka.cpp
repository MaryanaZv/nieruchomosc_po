#include <iostream>
#include "Nieruchomosc.h"
#include "Dzialka.h"

Dzialka::Dzialka() {

}

Dzialka::~Dzialka() {

}

void Dzialka::Wypisanie() {
	cout << "Dzialka :: Wypisanie (metoda wirtualna) " << endl;
}

void Dzialka::WypisujePola() {
	cout << "Podatek dzialki wynosi: " << podatek << endl;
	cout << "Adres dzialki: " << adres << endl;
}

Dzialka::Dzialka(int podatek, string adres) {
	this->podatek = podatek;
	this->adres = adres;
}

Dzialka::Dzialka(int rozmiar) {
	this->rozmiar = rozmiar;
}

ostream& operator<<(ostream& wyjscie, const Dzialka& d) {
	&Nieruchomosc::operator<<;
	cout << "\nDzialka :: Operator << " << endl;
	wyjscie << d.rozmiar << endl;
	return wyjscie;
}

istream& operator>>(istream& wejscie, Dzialka& d) {
	&Nieruchomosc::operator>>;
	cout << "\nDzialka :: Operator >>" << endl;
	wejscie >> d.rozmiar;
	return wejscie;
}
