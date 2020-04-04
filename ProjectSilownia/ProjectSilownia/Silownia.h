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
	static int getLiczba_klientow();
	void Wypisz(string nazwa);
	void Wypisz(string imie, int wiek);
};
