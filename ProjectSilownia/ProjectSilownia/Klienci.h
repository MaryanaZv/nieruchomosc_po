#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "Wlasciciel.h"

using namespace std;

class Klienci{
private:
	string imie;
	int wiek;
public:
	Klienci();
	~Klienci();
	Klienci(const Klienci& klient);
	Klienci(string imie, int wiek);
	void SetDane(string new_imie, int new_wiek);
};