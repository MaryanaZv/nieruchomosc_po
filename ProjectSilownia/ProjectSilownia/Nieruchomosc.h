#pragma once
#include <iostream>

using namespace std;

///Klasa abstrakcyjna
class Nieruchomosc {
protected:
	int podatek;///<zmienna wspolna dla wszystkich klasach pochodnych
	string adres;///<zmienna wspolna dla wszystkich klasach pochodnych
public:
	///wirtualny destruktor zeby nie bylo wyciekow pamieci
	virtual ~Nieruchomosc() = 0;

	///metoda wirtualna dla zademonstrowania wlasciwosci polimorfizmu
	virtual void Wypisanie() = 0;

	///przeciazony operator zapisu do pliku
	/**\param referencje do wyjscia i stala referencje na obiekt
	\return wyjscie*/
	virtual ostream& operator<<(ostream& wyjscie) const;

	///przeciazony operator odczytu z pliku
	/**\param referencje do wejscia i referencje na obiekt
	\return wejscie*/
	virtual istream& operator>>(istream& wejscie);

	///metoda wirtualna dla zademonstrowania dostepu klas pochodnych do pol klas wyzszych
	virtual void WypisujePola() = 0;
};