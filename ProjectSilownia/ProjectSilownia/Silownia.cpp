#include <iostream>
#include <string>
#include <vector>
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
	this->nazwa = silownia.nazwa;
#ifdef _DEBUG
	cout << "\nSilownia(const Silownia& silownia)" << endl;
	cout << "Silownia:" << "\nNazwa: " << nazwa << endl;
#endif
}

Silownia& Silownia::operator=(const Silownia& s) {
	if (&s != this) {
		nazwa = s.nazwa;
		liczba_klientow = s.liczba_klientow;
		cout << "\nOperator przypisania" << endl;
		cout << "Nazwa: " << nazwa << "\nLiczba klientow: " << liczba_klientow << endl;
	}
	return *this;
}

Silownia& Silownia::operator+=(const Silownia& sil) {
	cout << "\nOperator dwuargumentowy" << endl;
	liczba_test += sil.liczba_test;
	return *this;
}

Silownia::operator int() const{
	cout << "\nOperator konwersji" << endl;
	return this->liczba_test;
}

Silownia& Silownia::operator++()
{
	cout << "\nOperator jednoargumentowy" << endl;
	liczba_test++;
	return *this;
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

Silownia::Silownia (vector<Klienci> klients) {
	klients.push_back(Klienci());
}
		
void Silownia::wypisz_dane() {
	for (size_t i = 0; i < klients.size(); ++i)
		klients[i].SetDane("Ola", 22);
}

Klienci Silownia::operator[](int i) {
	cout << "\nOperator indeksowania" << endl;
	return klients[i];
}


void Silownia::Wypisanie() {
	cout << "Silownia :: Wypisanie (metoda wirtualna) " << endl;
} 

ostream& operator<<(ostream& wyjscie, const Silownia& k) {
	&Budynek::operator<<;
	cout << "\nSilownia :: Operator << " << endl;
	wyjscie << k.klienci << endl;
	return wyjscie;
}

istream& operator>>(istream& wejscie, Silownia& k) {
	&Budynek::operator>>;
	cout << "\nSilownia :: Operator >>" << endl;
	wejscie >> k.klienci;
	return wejscie;
}

Silownia::Silownia(int podatek, string adres, int ilosc_pieter) {
	this->podatek = podatek;
	this->adres = adres;
	this->ilosc_pieter = ilosc_pieter;
}

Silownia::Silownia(int klienci) {
	this->klienci = klienci;
}

void Silownia::WypisujePola() {
	cout << "Podatek silowni wynosi: " << podatek << endl;
	cout << "Adres silowni: " << adres << endl;
	cout << "Ilosc pieter silowni: " << ilosc_pieter << endl;
} 