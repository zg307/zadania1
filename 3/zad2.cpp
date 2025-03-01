#include <iostream>
using namespace std;

int main() {
    double tempCelsius;
    char wybor;

    // Wczytanie temperatury w stopniach Celsjusza
    cout << "Podaj temperature w stopniach Celsjusza: ";
    cin >> tempCelsius;

    // Wczytanie jednostki, do której ma zostać przeliczona temperatura
    cout << "Wybierz jednostke do przeliczenia (K - Kelvin, F - Fahrenheit): ";
    cin >> wybor;

    // Przeliczenie temperatury w zależności od wyboru użytkownika
    switch (wybor) {
        case 'K':
        case 'k':
            cout << "Temperatura w Kelvinach: " << tempCelsius + 273.15 << " K" << endl;
            break;
        case 'F':
        case 'f':
            cout << "Temperatura w Fahrenheitach: " << (tempCelsius * 9 / 5) + 32 << " °F" << endl;
            break;
        default:
            cout << "Błąd: nieprawidłowa opcja!" << endl;
            break;
    }

    return 0;
}
