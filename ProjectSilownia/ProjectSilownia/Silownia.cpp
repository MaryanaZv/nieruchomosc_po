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