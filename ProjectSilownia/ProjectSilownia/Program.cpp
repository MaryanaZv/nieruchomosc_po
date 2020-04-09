#include <iostream>
#include "Silownia.h"
#include "Bieznia.h"
#include "Klienci.h"

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

	Bieznia Bieznia("Fitness Magna Pro", "Italy"); //podobiekt automatyczny

	Klienci* Klient = new Klienci; //podobiekt dynamiczny
	Klient->Wypisz("Markus", 22);
	delete Klient;

	Klienci klient1("Ola", 25);
	Klienci klient2 = klient1; //konstruktor kopiujacy

	Klienci klient3("Kasia", 31);
	klient1 = klient3; //operator przypisania
	cout << klient1; //operator wypisywania

	Klienci klient4(20);
	Klienci klient5 = klient4.operator+(24); //operator jednoargumentowy
	klient5.Wypisz();

	Klienci klient6(20);
	klient6 += klient5; //operator dwuargumentowy
	klient6.Wypisz();

	zmienna_globalna = klient4; //operator konwersji
	cout << "Wartosc zmiennej po dzialaniu operatora: " << zmienna_globalna << endl;
	
	return 0;
}