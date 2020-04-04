#include <iostream>
#include <string>
#include "Silownia.h"

using namespace std;

int Silownia::liczba_klientow = 0;

Silownia::Silownia() {
#ifdef _DEBUG
	cout << "Silownia()" << endl;
#endif
	liczba_klientow++;
}

Silownia::~Silownia() {
#ifdef _DEBUG
	cout << "~Silownia()" << endl;
#endif
	liczba_klientow--;
}

int Silownia::getLiczba_klientow() {
	return liczba_klientow;
}

void Silownia::Wypisz(string nazwa) {
	this->nazwa = nazwa;
	cout << "\nWitamy w silowni " << nazwa << endl;
}

Silownia::Silownia(string model, string producent) {
#ifdef _DEBUG
	this->model = model;
	this->producent = producent;
	cout << "\nKorzystamy z biezni:" << "\nModel: " << model << "\nProducent: " << producent << endl;
#endif
}

Silownia::Silownia(const Silownia& klient) {
#ifdef _DEBUG
	imie = klient.imie;
	wiek = klient.wiek;
#endif
}

void Silownia::Wypisz(string imie, int wiek) {
	cout << "\nKlient:" << "\nImie: " << imie << "\nWiek: " << wiek << endl;
}