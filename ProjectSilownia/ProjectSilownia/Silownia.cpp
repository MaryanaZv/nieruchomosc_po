#include <iostream>
#include <string>
#include "Silownia.h"

using namespace std;

int Silownia::liczba_silowien = 0;

Silownia::Silownia() {
#ifdef _DEBUG
	cout << "\nSilownia()" << endl;
#endif
	liczba_silowien++;
}

Silownia::~Silownia() {
#ifdef _DEBUG
	cout << "\n~Silownia()" << endl;
#endif
	liczba_silowien--;
}

int Silownia::Liczba_Silowien() {
	return liczba_silowien;
}

void Silownia::Dane_Wlasciciel() {
	wlasciciel.SetName("Adam", "Adamowicz");
}

Silownia::Silownia(string nazwa, int liczba_klientow) {
	this->nazwa = nazwa;
	this->liczba_klientow = liczba_klientow;
#ifdef _DEBUG
	cout << "\nSilownia(string nazwa, int liczba_klientow)" << endl;
#endif
}

Silownia::Silownia(string nazwa) {
	this->nazwa = nazwa;
#ifdef _DEBUG
	cout << "\nSilownia(string nazwa)" << endl;
#endif
}

Silownia::Silownia(const Silownia& silownia) {
	nazwa = silownia.nazwa;
	liczba_klientow = silownia.liczba_klientow;
#ifdef _DEBUG
	cout << "\nSilownia(const Silownia& silownia)" << endl;
	cout << "Silownia:" << "\nNazwa: " << nazwa << "\nLiczba klientow: " << liczba_klientow << endl;
#endif
}

ostream& operator<<(ostream& wyjscie, const Silownia& k) {
	cout << "\nOperator wypisywania" << endl;
	wyjscie << "Nazwa: " << k.nazwa << endl;
	return wyjscie;
}

Silownia& Silownia::operator=(const Silownia& prawy) {
	if (&prawy != this) {
		nazwa = prawy.nazwa;
		liczba_klientow = prawy.liczba_klientow;
		cout << "\nOperator przypisania" << endl;
		cout << "Nazwa: " << nazwa << "\nLiczba klientow: " << liczba_klientow << endl;
	}
	return *this;
}

Silownia& operator+=(Silownia& lewy, const Silownia& prawy) {
	cout << "\nOperator dwuargumentowy" << endl;
	lewy.liczba_test += prawy.liczba_test;
	return lewy;
}

Silownia::operator int() const {
	cout << "\nOperator konwersji" << endl;
	return liczba_test;
}

Silownia Silownia::operator+(int liczba)
{
	cout << "\nOperator jednoargumentowy" << endl;
	return Silownia(liczba_test + liczba);
}

void Silownia::Wypisz() {
	cout << "Liczba testujaca po dzialaniu operatora: " << liczba_test << endl;
}

Silownia::Silownia(float liczba_test)  {
	this->liczba_test = liczba_test;
#ifdef _DEBUG
	cout << "\nSilownia(float liczba_test)" << endl;
#endif
}

Silownia::Silownia(int liczba_klientow) {
	if (liczba_klientow > 0)
		this->klients = new Klienci[liczba_klientow];
	else
		this->klients = 0;
#ifdef _DEBUG
	cout << "\nSilownia(int liczba_klientow)" << endl;
#endif
}

void Silownia::wypisz_dane() {
	this->klients->SetDane("Ola", 22);
}

Klienci Silownia::operator[](int i) {
	cout << "\nOperator indeksowania" << endl;
	return klients[i];
}
