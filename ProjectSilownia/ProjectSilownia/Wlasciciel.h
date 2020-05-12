#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Wlasciciel{
private:
	string imie;
	string nazwisko;
public:
	Wlasciciel();
	~Wlasciciel();
	Wlasciciel(const Wlasciciel& wlast);
	Wlasciciel(string imie, string nazwisko);
	void SetName(string n_imie, string n_nazwisko);
};  
