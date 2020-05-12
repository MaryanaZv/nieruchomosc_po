#include <iostream>
#include <fstream>
#include <vector>
#include "Silownia.h"
#include "Wlasciciel.h"
#include "Klienci.h"
#include "Dzialka.h"
#include "Budynek.h"

using namespace std;

Silownia zmienna_globalna; 

void print_menu() {
	system("cls"); 
	cout << "Co trzeba zrobic?" << endl;
	cout << " " << endl;
	cout << "1. Prodemonstrowac wlasciwosci polimirfizmu." << endl;
	cout << " " << endl;
	cout << "2. Prodemonstrowac dostep klasy Budynek do pol klasy wyzszej." << endl;
	cout << " " << endl;
	cout << "3. Prodemonstrowac dostep klasy Dzialka do pol klasy wyzszej." << endl;
	cout << " " << endl;
	cout << "4. Prodemonstrowac dostep klasy Silownia do pol klasy wyzszej." << endl;
	cout << " " << endl;
	cout << "5. Zapisac/odczytac dane klasy Budynek do/z pliku." << endl;
	cout << " " << endl;
	cout << "6. Zapisac/odczytac dane klasy Dzialka do/z pliku." << endl;
	cout << " " << endl;
	cout << "7. Zapisac/odczytac dane klasy Silownia do/z pliku." << endl;
	cout << " " << endl;
	cout << "8. Zakoncz." << endl;
	cout << " " << endl;
	cout << "Prosze napisac numer i nacisnac enter > ";
}

int main() {

	vector<Nieruchomosc*> nieruchomosc;

	Budynek b;
	Silownia s;
	Dzialka d;

	Budynek budynek(3000, "Adres budynku");
	Silownia silownia(2000, "Adres silowni", 2);
	Dzialka dzialka(4000, "Adres dzialki");

	Budynek budynek1(3);
	Silownia silownia1(150);
	Dzialka dzialka1(222);

	fstream plik;
	plik.open("/Users/Maryana/OneDrive/dok.txt", ios_base::out | ios_base::app);

	int variant;

	do {
		print_menu();

		cin >> variant;

		switch (variant) {
		case 1:

			nieruchomosc.push_back(&b);
			nieruchomosc.push_back(&s);
			nieruchomosc.push_back(&d);

			for (int i = 0; i < nieruchomosc.size(); ++i) {
				nieruchomosc[i]->Wypisanie();
			}
			break;

		case 2:
			budynek.WypisujePola();
			break;

		case 3:
			dzialka.WypisujePola();
			break;

		case 4:
			silownia.WypisujePola();
			break;
		case 5:
			
			if (!plik.is_open()) {
				cout << "Blad otwarcia pliku! " << endl;
			}

			else {
				cout << "Plik jest otwarty! " << endl;
				plik << budynek1 << endl;
			}

			plik.close();

			break;
		case 6:

			if (!plik.is_open()) {
				cout << "Blad otwarcia pliku! " << endl;
			}

			else {
				cout << "Plik jest otwarty! " << endl;
				plik << dzialka1 << endl;
			}

			plik.close(); 

			break;
		case 7:

			if (!plik.is_open()) {
				cout << "Blad otwarcia pliku! " << endl;
			}

			else {
				cout << "Plik jest otwarty! " << endl;
				plik << silownia1 << endl;
			}

			plik.close();

			break;
		case 8:
			break;
		default:
			cout << "Wprowadzony numer jest zly, nie ma takiego polecenia." << endl;
		}

		if (variant != 8)
			system("pause");
	} while (variant != 8);

	return 0;
}