#include <iostream>
#include <string>
#include "Bieznia.h"

using namespace std;

Bieznia::Bieznia() {
#ifdef _DEBUG
	cout << "\nBieznia()" << endl;
#endif
}

Bieznia::Bieznia(string model, string producent) {
	this->model = model;
	this->producent = producent;
#ifdef _DEBUG
	cout << "\nBieznia(string model, string producent)" << endl;
	cout << "Korzystamy z biezni:" << "\nModel: " << model << "\nProducent: " << producent << endl;
#endif
}

Bieznia::~Bieznia() {
#ifdef _DEBUG
	cout << "\n~Bieznia()" << endl;
#endif
}