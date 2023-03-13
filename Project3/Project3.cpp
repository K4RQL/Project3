#include <iostream>
#include "Pytanie.h"

using namespace std;

int main()
{
    Pytanie quiz;
    quiz.WczytajPytanie();
    while (quiz.i<=5)
    {
        quiz.ZadajPytanie();
        quiz.Sprawdz();
        quiz.i++;
    }
    cout << "Zdobyles " << quiz.punkty << "/6 punktow!" << endl;
}
