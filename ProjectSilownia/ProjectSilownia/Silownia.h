#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Wlasciciel.h"
#include "Klienci.h"
#include "Nieruchomosc.h"
#include "Budynek.h"

using namespace std;

///Klasa dziedziczaca po klasie abstrakcyjnej
class Silownia: public Budynek{
private:
	static int liczba_silowien; ///< zmienna potrzebna do proektu 1
	int liczba_klientow; ///< zmienna potrzebna do proektu 1
	string nazwa; ///< zmienna potrzebna do proektu 1
	Wlasciciel wlasciciel; ///< obiekt automatyczny
	float liczba_test; ///< zmienna potrzebna do proektu 1
	vector<Klienci> klients; ///<zamieniona tablica
protected:
	string klienci; ///<zmienna wlasna
public:
	///konstruktor domyslny
	Silownia();

	///wirtualny destruktor
	~Silownia() override;

	///metoda zwracajaca wartosc liczby silowien
	/**\return liczba silowien*/
	static int Liczba_Silowien();

	///ta metoda nadaje dostep do pol prywatnych klasy wlasciciel
	void Dane_Wlasciciel();

	///konstruktor
	/**\param przymuje nazwe silowni i liczbe klientow*/
	Silownia(string nazwa, int liczba_klientow);

	///konstruktor kopiujacy
	/**\param przymuje referencje stala na obiekt*/
	Silownia(const Silownia& silownia);

	///konstruktor
	/**\param przymuje nazwe silowni*/
	Silownia(string nazwa);

	///przeciazony operator dwuargumentowy
	/**\param przymuje referencje stala na obiekt
	\return zwraca wartosc liczby test*/
	Silownia& operator+=(const Silownia& sil);

	///przeciazony operator konwersji
	/**	\return zwraca wartosc liczby test*/ 
	operator int() const;

	///przeciazony operator przypisania
	/**\param przymuje referencje stala na obiekt
	\return zwraca wskaznik na this*/ 
	Silownia& operator=(const Silownia& prawy);

	///przeciazony operator jednoargumentowy
	/**\return zwraca wskaznik na this*/ 
	Silownia& operator++();

	///metoda wypisuje liczbe testowa 
	void Wypisz();

	///konstruktor
	/**\param przyjmuje liczbe test*/
	Silownia(float liczba_test);

	///konstruktor ktory dodaje obiekty klasy Klienci na koniec wektora
	/**\param przymuje obiekt wektora*/
	Silownia( vector<Klienci> klients);

	///metoda wypisuje dane klientow z wektora
	void wypisz_dane();

	///przeciazony operator rzutowania
	/**\param przyjmuje liczbe typu int*/
	Klienci operator[](int i);


	///metoda wirtualna dla zademonstrowania wlasciwosci polimorfizmu
	void Wypisanie() override;

	///przeciazony operator zapisu do pliku
	/**\param referencje do wyjscia i stala referencje na obiekt
	\return wyjscie*/
	friend ostream& operator<<(ostream& wyjscie, const Silownia& k);

	///przeciazony operator odczytu z pliku
	/**\param referencje do wejscia i referencje na obiekt
	/return wejscie*/
	friend istream& operator>>(istream& wejscie, Silownia& k);

	///konstruktor potrzebny do zademonstrowania dostepu klas pochodnych do pol klas wyzszych
	/**\param parametry dostepne z klasy abstrakcyjnej i wyzszej*/
	Silownia(int podatek, string adres, int ilosc_pieter);

	///konstruktor potrzebny do zapisu "swojego" pola, czyli klienci
	/**param parametr wlasny */
	Silownia(int klienci);

	///metoda wirtualna dla zademonstrowania dostepu klas pochodnych do pol klas wyzszych
	void WypisujePola() override;
};