#include <iostream>
#include "Silownia.h"

using namespace std;

int zmienna_globalna; 

int main() {
	cout << Silownia::Liczba_Klientow() << endl;
	Silownia Klient1;
	cout << Silownia::Liczba_Klientow() << " - ilosc klientow obecnych" << endl;
	Silownia* Klient2 = new Silownia;
	cout << Silownia::Liczba_Klientow() << " - ilosc klientow obecnych" << endl;
	delete Klient2;
	cout << Silownia::Liczba_Klientow() << " - ilosc klientow obecnych" << endl;

	Silownia silownia;
	silownia.Wypisz("ProFit");

	Silownia Bieznia("Fitness Magna Pro", "Italy"); //podobiekt automatyczny

	Silownia* Klient = new Silownia; //podobiekt dynamiczny
	Klient->Wypisz("Markus", 22);
	delete Klient;

	Silownia klient1("Ola", 25);
	Silownia klient2 = klient1; //konstruktor kopiujacy

	Silownia klient3("Kasia", 31);
	klient1 = klient3; //operator przypisania
	cout << klient1; //operator wypisywania

	Silownia klient4(20);
	Silownia klient5 = klient4.operator+(24); //operator jednoargumentowy
	klient5.Wypisz();

	Silownia klient6(20);
	klient6 += klient5; //operator dwuargumentowy
	klient6.Wypisz();

	zmienna_globalna = klient4; //operator konwersji
	cout << "Wartosc zmiennej po dzialaniu operatora: " << zmienna_globalna << endl;

	return 0;
}