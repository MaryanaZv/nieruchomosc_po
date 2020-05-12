#include <iostream>
#include "Nieruchomosc.h"

Nieruchomosc::~Nieruchomosc() {};

ostream& Nieruchomosc::operator<<(ostream& wyjscie) const{
	return wyjscie;
}

istream& Nieruchomosc::operator>>(istream& wejscie) {
	return wejscie;
}