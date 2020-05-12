#pragma once
#include <iostream>
#include "Nieruchomosc.h"

using namespace std;

///Klasa dziedziczaca po klasie abstrakcyjnej
class Dzialka :public Nieruchomosc {
protected:
	int rozmiar;///<zmienna wlasna 
public:
	///konstruktor domyslny
	Dzialka();

	///wirtualny destruktor
	~Dzialka() override;

	///metoda wirtualna dla zademonstrowania wlasciwosci polimorfizmu
	void Wypisanie() override;

	///metoda wirtualna dla zademonstrowania dostepu klas pochodnych do pol klas wyzszych
	void WypisujePola() override;

	///konstruktor potrzebny do zademonstrowania dostepu klas pochodnych do pol klas wyzszych
	/**\param parametry dostepne z klasy abstrakcyjnej*/
	Dzialka(int podatek, string adres);

	///konstruktor potrzebny do zapisu "swojego" pola, czyli rozmiar
	/**param parametr wlasny */
	Dzialka(int rozmiar);

	///przeciazony operator zapisu do pliku
	/**\param referencje do wyjscia i stala referencje na obiekt
	\return wyjscie*/
	friend ostream& operator<<(ostream& wyjscie, const Dzialka& d);

	///przeciazony operator odczytu z pliku
	/**\param referencje do wejscia i referencje na obiekt 
	return wejscie*/
	friend istream& operator>>(istream& wejscie, Dzialka &d);
};