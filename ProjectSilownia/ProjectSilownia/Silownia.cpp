#include <iostream>
#include <string>
#include "Silownia.h"

using namespace std;

int Silownia::liczba_klientow = 0;

Silownia::Silownia() {
#ifdef _DEBUG
	cout << "\nSilownia()" << endl;
#endif
	liczba_klientow++;
}

Silownia::~Silownia() {
#ifdef _DEBUG
	cout << "\n~Silownia()" << endl;
#endif
	liczba_klientow--;
}

int Silownia::Liczba_Klientow() {
	return liczba_klientow;
}

void Silownia::Wypisz(string nazwa) {
	this->nazwa = nazwa;
	cout << "Witamy w silowni " << nazwa << endl;
}

Silownia::Silownia(string model, string producent) {
#ifdef _DEBUG
	this->model = model;
	this->producent = producent;
	cout << "\nSilownia(string model, string producent)" << endl;
	cout << "Korzystamy z biezni:" << "\nModel: " << model << "\nProducent: " << producent << endl;
#endif
}

Silownia::Silownia(string imie, int wiek) {
#ifdef _DEBUG
	this->imie = imie;
	this->wiek = wiek;
	cout << "\nSilownia(string imie, int wiek)" << endl;
	cout << "Klient:" << "\nImie: " << imie << "\nWiek: " << wiek << endl;
#endif
}

Silownia::Silownia(const Silownia& klient) {
#ifdef _DEBUG
	imie = klient.imie;
	wiek = klient.wiek;
	cout << "\nSilownia(const Silownia& klient)" << endl;
	cout << "Klient:" << "\nImie: " << imie << "\nWiek: " << wiek << endl;
#endif
}

void Silownia::Wypisz(string imie, int wiek) {
	cout << "Klient:" << "\nImie: " << imie << "\nWiek: " << wiek << endl;
}

Silownia& Silownia::operator=(const Silownia& prawy) {
	if (&prawy != this) {
		imie = prawy.imie;
		wiek = prawy.wiek;
		cout << "\nOperator przypisania" << endl;
		cout << "Imie: " << imie << "\nWiek: " << wiek << endl;
	}
	return *this;
}

ostream& operator<<(ostream& wyjscie, const Silownia& k) {
	cout << "\nOperator wypisywania" << endl;
	wyjscie << "Imie: " << k.imie << "\nWiek: " << k.wiek << endl;
	return wyjscie;
}

Silownia::Silownia(int wiek) {
#ifdef _DEBUG
	this->wiek = wiek;
	cout << "\nSilownia(int wiek)" << endl;
#endif
}

Silownia Silownia::operator+(int liczba)
{
	cout << "\nOperator jednoargumentowy" << endl;
	return Silownia(wiek + liczba);	
}

void Silownia::Wypisz() {
	cout << "Wiek po dzialaniu operatora: " << wiek << endl;
}

Silownia& operator+=(Silownia& lewy, const Silownia& prawy) {
	cout << "\nOperator dwuargumentowy" << endl;
	lewy.wiek += prawy.wiek;
	return lewy;
}
