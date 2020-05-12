#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

///klasa potrzebna do tworzenia obiektu automatycznego w proekcie 1
class Wlasciciel{
private:
	string imie;///<zmienna wlasna
	string nazwisko;///<zmienna wlasna
public:
	///konstruktor domyslny
	Wlasciciel();

	///destruktor domyslny
	~Wlasciciel();

	///konstruktor kopiujacy
	/**\param przymuje referencje stala na obiekt*/
	Wlasciciel(const Wlasciciel& wlast);

	///konstruktor
	/**\param przymuje dane wlasciciela, czyli imie i nazwisko*/
	Wlasciciel(string imie, string nazwisko);

	///metoda przypisuje dane do obiektu
	/**\param przyjmuje dane wlasciciela*/
	void SetName(string n_imie, string n_nazwisko);
};  
