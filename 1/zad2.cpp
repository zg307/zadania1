#include <iostream>
using namespace std;

int main() {
    int liczba1, liczba2;

    // Wprowadzenie liczb
    cout << "Podaj pierwsza liczbe: ";
    cin >> liczba1;
    cout << "Podaj druga liczbe: ";
    cin >> liczba2;

    // Obliczanie sumy, różnicy i iloczynu
    int suma = liczba1 + liczba2;
    int roznica = liczba1 - liczba2;
    int iloczyn = liczba1 * liczba2;

    // Wyświetlanie wyników
    cout << "Suma: " << suma << endl;
    cout << "Roznica: " << roznica << endl;
    cout << "Iloczyn: " << iloczyn << endl;

    return 0;
}