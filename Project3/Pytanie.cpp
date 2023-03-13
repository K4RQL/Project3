#include "Pytanie.h"
#include <string>
#include <iostream>

using namespace std;

void Pytanie::WczytajPytanie()
{
	plik.open("C:\\Users\\Karol\\source\\repos\\Project3\\quiz.txt", ios::in | ios::out);

	if (plik.good() == false) {
		cout << "nie git";
		plik.close();
	}
	
	while (getline(plik, linia)) {
		switch (nrLini)
		{
		case 1: tresc[nrPytania] = linia;		break;
		case 2: odpA[nrPytania] = linia;		break;
		case 3: odpB[nrPytania] = linia;		break;
		case 4: odpC[nrPytania] = linia;		break;
		case 5: poprawna[nrPytania] = linia;	break;
		}
		if (nrLini == 5) {
			nrLini = 0;
			nrPytania++;
		}
		nrLini++;
	}
	plik.close();
}

void Pytanie::ZadajPytanie(){
		cout << tresc[i] << endl;
		cout << odpA[i] << endl;
		cout << odpB[i] << endl;
		cout << odpC[i] << endl;
}

void Pytanie::Sprawdz(){
	cout << "Odpowiedz: ";
	cin >> odpowiedz;

	if (odpowiedz == poprawna[i]) {
		cout << "Poprawna" << endl << endl;;
		punkty++;
	}
	else {
		cout << "Niepoprawna" << endl << endl;;
	}
}
