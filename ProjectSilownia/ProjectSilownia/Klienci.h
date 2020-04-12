#pragma once
#include <iostream>
#include <string>

using namespace std;

class Klienci{
private:
	string imie;
	int wiek;
public:
	Klienci();
	~Klienci();
	void SetDane(string new_imie, int new_wiek);
};