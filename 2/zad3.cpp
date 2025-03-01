#include <iostream>
using namespace std;

int main() {
    int liczba;

    // Wczytanie liczby od użytkownika
    cout << "Podaj liczbe calkowita: ";
    cin >> liczba;

    // Sprawdzenie, czy liczba jest parzysta
    if (liczba % 2 == 0) {
        cout << "Liczba jest parzysta." << endl;
    } else {
        cout << "Liczba nie jest parzysta." << endl;
    }

    // Sprawdzenie, czy liczba jest podzielna przez 3
    if (liczba % 3 == 0) {
        cout << "Liczba jest podzielna przez 3." << endl;
    } else {
        cout << "Liczba nie jest podzielna przez 3." << endl;
    }

    return 0;
}