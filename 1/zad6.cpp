#include <iostream>
using namespace std;

int main() {
    // Deklaracja zmiennych
    double liczba1, liczba2, suma;

    // Pobranie dwóch liczb od użytkownika
    cout << "Podaj pierwsza liczbe: ";
    cin >> liczba1;

    cout << "Podaj druga liczbe: ";
    cin >> liczba2;

    // Obliczenie sumy
    suma = liczba1 + liczba2;

    // Wyświetlenie sumy
    cout << "Suma liczb wynosi: " << suma << endl;

    // Sprawdzenie, czy suma jest liczbą parzystą czy nieparzystą
    if (static_cast<int>(suma) % 2 == 0) {
        cout << "Wynik jest liczba parzysta." << endl;
    } else {
        cout << "Wynik jest liczba nieparzysta." << endl;
    }

    return 0;
}