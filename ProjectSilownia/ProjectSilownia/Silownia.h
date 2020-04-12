#pragma once
#include <iostream>
#include <string>
#include "Wlasciciel.h"
#include "Klienci.h"

using namespace std;

class Silownia{
private:
	static int liczba_silowien;
	int liczba_klientow;
	string nazwa;
	Wlasciciel wlasciciel;
	float liczba_test;
	Klienci* klients; 
public:
	Silownia();
	~Silownia();
	static int Liczba_Silowien();
	void Dane_Wlasciciel();
	Silownia(string nazwa, int liczba_klientow);
	Silownia(const Silownia& silownia);
	Silownia(string nazwa);
	friend ostream& operator<<(ostream&, const Silownia&);
	friend Silownia& operator+=(Silownia& left, const Silownia& right);
	operator int() const;
	Silownia& operator=(const Silownia& prawy);
	Silownia operator+(int liczba);
	void Wypisz();
	Silownia(float liczba_test);
	Silownia(int liczba_klientow);
	void wypisz_dane();
	Klienci operator[](int i);
};