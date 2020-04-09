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

Klienci::Klienci(string imie, int wiek) {
	this->imie = imie;
	this->wiek = wiek;
#ifdef _DEBUG
	cout << "\nKlienci(string imie, int wiek)" << endl;
	cout << "Klient:" << "\nImie: " << imie << "\nWiek: " << wiek << endl;
#endif
}

Klienci::Klienci(const Klienci& klient) {
	imie = klient.imie;
	wiek = klient.wiek;
#ifdef _DEBUG
	cout << "\nKlienci(const Klienci& klient)" << endl;
	cout << "Klient:" << "\nImie: " << imie << "\nWiek: " << wiek << endl;
#endif
}

void Klienci::Wypisz(string imie, int wiek) {
	cout << "Klient:" << "\nImie: " << imie << "\nWiek: " << wiek << endl;
}

Klienci& Klienci::operator=(const Klienci& prawy) {
	if (&prawy != this) {
		imie = prawy.imie;
		wiek = prawy.wiek;
		cout << "\nOperator przypisania" << endl;
		cout << "Imie: " << imie << "\nWiek: " << wiek << endl;
	}
	return *this;
}

ostream& operator<<(ostream& wyjscie, const Klienci& k) {
	cout << "\nOperator wypisywania" << endl;
	wyjscie << "Imie: " << k.imie << "\nWiek: " << k.wiek << endl;
	return wyjscie;
}

Klienci::Klienci(int wiek) {
	this->wiek = wiek;
#ifdef _DEBUG
	cout << "\nKlienci(int wiek)" << endl;
#endif
}

Klienci Klienci::operator+(int liczba)
{
	cout << "\nOperator jednoargumentowy" << endl;
	return Klienci(wiek + liczba);
}

void Klienci::Wypisz() {
	cout << "Wiek po dzialaniu operatora: " << wiek << endl;
}

Klienci& operator+=(Klienci& lewy, const Klienci& prawy) {
	cout << "\nOperator dwuargumentowy" << endl;
	lewy.wiek += prawy.wiek;
	return lewy;
}

Klienci::operator int() const {
	cout << "\nOperator konwersji" << endl;
	return wiek;
}