#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Wlasciciel.h"
#include "Klienci.h"
#include "Nieruchomosc.h"
#include "Budynek.h"

using namespace std;

class Silownia: public Budynek{
private:
	static int liczba_silowien;
	int liczba_klientow;
	string nazwa;
	Wlasciciel wlasciciel;
	float liczba_test;
	vector<Klienci> klients; 
protected:
	string klienci;
public:
	Silownia();
	~Silownia() override;
	static int Liczba_Silowien();
	void Dane_Wlasciciel();
	Silownia(string nazwa, int liczba_klientow);
	Silownia(const Silownia& silownia);
	Silownia(string nazwa);
	Silownia& operator+=(const Silownia& sil);
	operator int() const;
	Silownia& operator=(const Silownia& prawy);
	Silownia& operator++();
	void Wypisz();
	Silownia(float liczba_test);
	Silownia( vector<Klienci> klients);
	void wypisz_dane();
	Klienci operator[](int i);

	void Wypisanie() override;
	friend ostream& operator<<(ostream& wyjscie, const Silownia& k);
	friend istream& operator>>(istream& wejscie, Silownia& k);
	Silownia(int podatek, string adres, int ilosc_pieter);
	Silownia(int klienci);
	void WypisujePola() override;
};