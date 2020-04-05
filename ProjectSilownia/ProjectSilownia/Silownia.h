#pragma once
#include <iostream>
#include <string>

using namespace std;

class Silownia {
private:
	static int liczba_klientow;
	string nazwa;
	string model;
	string producent;
	string imie;
	int wiek;
public:
	Silownia();
	~Silownia();
	Silownia(string model, string producent);
	Silownia(string k_imie, int k_wiek);
	Silownia(const Silownia& klient);
	static int Liczba_Klientow();
	void Wypisz(string nazwa);
	void Wypisz(string imie, int wiek);
	Silownia& operator=(const Silownia& prawy);
	friend ostream& operator<<(ostream&, const Silownia&);
	Silownia(int wiek);
	Silownia operator+(int liczba);
	void Wypisz();
	friend Silownia& operator+=(Silownia& left, const Silownia& right);
	operator int() const;
};