#pragma once
#include <iostream>
#include <string>

using namespace std;

class Klienci{
public:
	string imie;
	int wiek;
	Klienci();
	~Klienci();
	Klienci(string k_imie, int k_wiek);
	Klienci(const Klienci& klient);
	void Wypisz(string imie, int wiek);
	Klienci& operator=(const Klienci& prawy);
	friend ostream& operator<<(ostream&, const Klienci&);
	Klienci(int wiek);
	Klienci operator+(int liczba);
	void Wypisz();
	friend Klienci& operator+=(Klienci& left, const Klienci& right);
	operator int() const;
};