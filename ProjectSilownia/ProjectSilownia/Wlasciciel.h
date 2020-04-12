#pragma once
#include <iostream>
#include <string>

using namespace std;

class Wlasciciel{
private:
	string imie;
	string nazwisko;
public:
	Wlasciciel();
	~Wlasciciel();
	void SetName(string n_imie, string n_nazwisko);
};  