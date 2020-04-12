#include <iostream>
#include "Silownia.h"
#include "Wlasciciel.h"
#include "Klienci.h"

using namespace std;

int zmienna_globalna; 

int main() {
	cout << Silownia::Liczba_Silowien() << endl;
	Silownia s1;
	cout << Silownia::Liczba_Silowien() << endl;
	Silownia* s2 = new Silownia;
	cout << Silownia::Liczba_Silowien() << endl;
	delete s2;
	cout << Silownia::Liczba_Silowien() << endl;

	Silownia silownia("ProFit");
	cout << silownia; //operator wypisywania

	Silownia wlasciciel; 
	wlasciciel.Dane_Wlasciciel(); //podobiekt automatyczny

	Silownia* pa;
	pa = new Silownia(1); //podobiekt dynamiczny
	pa->wypisz_dane();
	delete pa;

	Silownia silownia1("Fitness", 25);
	Silownia silownia2 = silownia1; //konstruktor kopiujacy

	Silownia silownia3("FitPro", 31);
	silownia1 = silownia3; //operator przypisania

	Silownia silownia4(3000.5f);
	Silownia silownia5 = silownia4.operator+(200); //operator jednoargumentowy
	silownia5.Wypisz();

	Silownia silownia6(2000.5f);
	silownia6 += silownia5; //operator dwuargumentowy
	silownia6.Wypisz();

	Silownia silownia7(1);
	Klienci klient = silownia7[1]; //operator indeksowania
	silownia7[1].SetDane("Marek", 23);

	zmienna_globalna = silownia4; //operator konwersji
	cout << "Wartosc zmiennej po dzialaniu operatora: " << zmienna_globalna << endl;
	
	return 0;
}