#ifndef Pytanie_h
#define Pytanie_h
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Pytanie
{
public:
	int i = 0;
	string tresc[6];
	string odpA[6], odpB[6], odpC[6];
	string poprawna[6];
	string odpowiedz;
	int punkty = 0;
	int nrLini = 1;
	int nrPytania = 0;
	string linia;
	fstream plik;
	void WczytajPytanie();
	void ZadajPytanie();
	void Sprawdz();
};


#endif

