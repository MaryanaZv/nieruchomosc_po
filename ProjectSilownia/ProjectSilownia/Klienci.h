#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "Wlasciciel.h"

using namespace std;

///klasa potrzebna do tworzenia obiektu wynamicznego w proekcie 1
class Klienci{
private:
	string imie; ///<zmienna wlasna
	int wiek; ///<zmienna wlasna
public:
	///konstruktor domyslny
	Klienci();

	///destruktor domyslny
	~Klienci();

	///konstruktor kopiujacy
	/**\param przymuje referencje stala na obiekt*/
	Klienci(const Klienci& klient);

	///konstruktor
	/**\param przymuje dane klienta, czyli imie i wiek*/
	Klienci(string imie, int wiek);

	///metoda przypisuje dane do obiektu
	/**\param przyjmuje dane klienta*/
	void SetDane(string new_imie, int new_wiek);
};

