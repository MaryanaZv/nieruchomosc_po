#pragma once
#include <iostream>
#include "Nieruchomosc.h"

using namespace std;

///Klasa dziedziczaca po klasie abstrakcyjnej
class Budynek:public Nieruchomosc {
protected:
	int ilosc_pieter; ///<zmienna wlasna 
public:
	///konstruktor domyslny
	Budynek();

	///wirtualny destruktor
	~Budynek() override;

	///metoda wirtualna dla zademonstrowania wlasciwosci polimorfizmu
	void Wypisanie() override;

	///metoda wirtualna dla zademonstrowania dostepu klas pochodnych do pol klas wyzszych
	void WypisujePola() override;

	///konstruktor potrzebny do zademonstrowania dostepu klas pochodnych do pol klas wyzszych
	/**\param parametry dostepne z klasy abstrakcyjnej*/
	Budynek(int podatek, string adres);

	///konstruktor potrzebny do zapisu "swojego" pola, czyli ilosc pieter
	/**param parametr wlasny */
	Budynek(int ilosc_pieter);

	///przeciazony operator zapisu do pliku
	/**\param referencje do wyjscia i stala referencje na obiekt
	\return wyjscie*/
	friend ostream& operator<<(ostream& wyjscie, const Budynek& b);

	///przeciazony operator odczytu z pliku
	/**\param referencje do wejscia i referencje na obiekt
	/return wejscie*/
	friend istream& operator>>(istream& wejscie, Budynek& b);
}; 
