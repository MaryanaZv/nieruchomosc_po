#pragma once
#include <iostream>

using namespace std;

class Nieruchomosc {
protected:
	int podatek;
	string adres;
public:
	virtual ~Nieruchomosc() = 0;
	virtual void Wypisanie() = 0;
	virtual ostream& operator<<(ostream& wyjscie) const;
	virtual istream& operator>>(istream& wejscie);
	virtual void WypisujePola() = 0; 
};