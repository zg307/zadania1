#include <iostream>
using namespace std;

int main() {
    int godziny;
    char pojazd;
    double oplata;

    // Wczytanie liczby godzin parkowania
    cout << "Podaj liczbe godzin parkowania: ";
    cin >> godziny;

    // Wczytanie rodzaju pojazdu
    cout << "Podaj rodzaj pojazdu (S - samochod osobowy, M - motocykl, A - autobus): ";
    cin >> pojazd;

    // Obliczanie opłaty na podstawie rodzaju pojazdu
    switch (pojazd) {
        case 'S':
        case 's':
            oplata = godziny * 5;
            cout << "Oplata za parkowanie samochodu osobowego: " << oplata << " zl" << endl;
            break;
        case 'M':
        case 'm':
            oplata = godziny * 3;
            cout << "Oplata za parkowanie motocykla: " << oplata << " zl" << endl;
            break;
        case 'A':
        case 'a':
            oplata = godziny * 10;
            cout << "Oplata za parkowanie autobusu: " << oplata << " zl" << endl;
            break;
        default:
            cout << "Blad: nieznany rodzaj pojazdu!" << endl;
            break;
    }

    return 0;
}