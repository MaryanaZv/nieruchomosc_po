#pragma once
#include <iostream>
#include "Nieruchomosc.h"

using namespace std;

class Dzialka :public Nieruchomosc {
protected:
	int rozmiar;
public:
	Dzialka();
	~Dzialka() override;
	void Wypisanie() override;
	void WypisujePola() override;
	Dzialka(int podatek, string adres);
	Dzialka(int rozmiar);
	friend ostream& operator<<(ostream& wyjscie, const Dzialka& d);
	friend istream& operator>>(istream& wejscie, Dzialka &d);
};