#include <iostream>
#include <string>

using namespace std;

int main()
{
    string imie = "Piotr";
    string nazwisko = "Tolczyk";
    int rok_urodzenia = 1997;
    int aktualny_rok = 2017;
    cout << "Witam, nazywam sie " << imie << " " << nazwisko << ".\n" << "Mam" << aktualny_rok - rok_urodzenia << "lat.";
    return 0;
}
