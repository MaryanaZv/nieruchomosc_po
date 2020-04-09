#pragma once
#include <iostream>
#include <string>

using namespace std;

class Silownia{
private:
	static int liczba_klientow;
	string nazwa;
public:
	Silownia();
	~Silownia();
	static int Liczba_Klientow();
	void Wypisz(string nazwa);
};