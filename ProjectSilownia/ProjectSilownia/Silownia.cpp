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

int Silownia::getLiczba_klientow() {
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