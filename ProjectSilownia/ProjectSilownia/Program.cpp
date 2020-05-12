#include <iostream>
#include <fstream>
#include <vector>
#include "Silownia.h"
#include "Wlasciciel.h"
#include "Klienci.h"
#include "Dzialka.h"
#include "Budynek.h"

using namespace std;

Silownia zmienna_globalna; ///<zmienna globalna z proektu 1

///metoda wypusuje menu polecen na ekran 
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
	///wektor wskaznikow na obiekty klas
	/**ten wektor jest potrzebny do zademonstrowania wlasciwosci polimorfizmu*/
	vector<Nieruchomosc*> nieruchomosc;

	///obiekt klasy 
	Budynek b; 
	///obiekt klasy 
	Silownia s;
	///obiekt klasy 
	Dzialka d;

	///obiekt klasy z parametrami 
	Budynek budynek(3000, "Jakis adres budynku");
	///obiekt klasy z parametrami 
	Silownia silownia(2000, "Jakis adres silowni", 2);
	///obiekt klasy z parametrami 
	Dzialka dzialka(4000, "Jakis adres dzialki");

	///obiekt klasy z parametrami 
	Budynek budynek1(3);
	///obiekt klasy z parametrami 
	Silownia silownia1(150);
	///obiekt klasy z parametrami 
	Dzialka dzialka1(222);

	///obiekt klasy
	fstream plik;

	///otwieranie pliku do zapisu/odczytu
	plik.open("/Users/Maryana/OneDrive/dok.txt", ios_base::out | ios_base::app);

	int variant; ///<zmienna ktora podajemy do switch

	///metoda uruchomienia menu
	do {
		///wypisuje menu na ekran
		print_menu(); 

		///trzeba wprowadzic numer polecenia
		cin >> variant; 

		///metoda pozwala na wykonanie polecen za numerem
		switch (variant) {

			///jesli variant rowny 1 to zrob to
			/**dodaje wszystkie obiekty do vector i dla kazdego wywoluje metode Wypisanie 
			\param referencje na obiekt*/
		case 1:
			nieruchomosc.push_back(&b);
			nieruchomosc.push_back(&s);
			nieruchomosc.push_back(&d);

			for (int i = 0; i < nieruchomosc.size(); ++i) {
				nieruchomosc[i]->Wypisanie();
			}
			break;

			///jesli variant rowny 2 to wywolaj metode 
		case 2:
			budynek.WypisujePola();
			break;

			///jesli variant rowny 3 to wywolaj metode 
		case 3:
			dzialka.WypisujePola();
			break;

			///jesli variant rowny 4 to wywolaj metode 
		case 4:
			silownia.WypisujePola();
			break;

			///jesli variant rowny 5 zapisz obiekt budynek1 do pliku
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

			///jesli variant rowny 6 zapisz obiekt dzialka1 do pliku
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

			///jesli variant rowny 7 zapisz obiekt silownia1 do pliku
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

			///jesli variant rowny 8 to break
		case 8:
			break;

			///jesli variant nie jest rowny 1-8 to wypisz to
		default:
			cout << "Wprowadzony numer jest zly, nie ma takiego polecenia." << endl;
		}

		///jesli variant jest nie rowny 8 to zatrzymaj wszystko na ekranie
		if (variant != 8)
			system("pause");
	} ///dopoki variant nie bedzie rowny 8
	while (variant != 8);

	/**\return zwraca zero*/
	return 0;
}