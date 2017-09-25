#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    string imie;
    string nazwisko;
    int rok_urodzenia;
    int aktualny_rok;
    cout << "Podaj imie\n";
    cin >> imie;
    cout << "\nPodaj nazwisko\n";
    cin >> nazwisko;
    cout << "\nPodaj rok urodzenia\n";
    cin >> rok_urodzenia;
    cout << "\nPodaj aktualny rok\n";
    cin >> aktualny_rok;
    cout << "Witam, nazywam sie " << imie << " " << nazwisko << ".\n" << "Mam " << aktualny_rok - rok_urodzenia << " lat.";
    system "pause";
    return 0;
}
