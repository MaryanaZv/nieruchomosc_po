#pragma once
#include <iostream>
#include "Nieruchomosc.h"

using namespace std;

class Budynek:public Nieruchomosc {
protected:
	int ilosc_pieter;
public:
	Budynek();
	~Budynek() override;
	void Wypisanie() override;
	void WypisujePola() override;
	Budynek(int podatek, string adres);
	Budynek(int ilosc_pieter);
	friend ostream& operator<<(ostream& wyjscie, const Budynek& b);
	friend istream& operator>>(istream& wejscie, Budynek& b);
}; 
