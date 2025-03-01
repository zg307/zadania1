#include <iostream>
using namespace std;

int main() {
    // Deklaracja zmiennych
    int liczba1, liczba2;

    // Wczytanie liczb całkowitych od użytkownika
    cout << "Podaj pierwsza liczbe calkowita: ";
    cin >> liczba1;
    cout << "Podaj druga liczbe calkowita: ";
    cin >> liczba2;

    // Wykonanie operacji arytmetycznych
    int dodawanie = liczba1 + liczba2;
    int odejmowanie = liczba1 - liczba2;
    int mnozenie = liczba1 * liczba2;
    float dzielenie = 0;
    string dzielenie_text = "Nie mozna dzielic przez 0";
    if (liczba2 != 0) {
        dzielenie = static_cast<float>(liczba1) / liczba2;  // Konwersja na float, aby uzyskać dokładność dzielenia
        dzielenie_text = to_string(dzielenie);
    }
    string reszta_text = "Nie mozna obliczyc reszty z dzielenia przez 0";
    if (liczba2 != 0) {
        int reszta = liczba1 % liczba2;
        reszta_text = to_string(reszta);
    }

    // Wyświetlenie wyników
    cout << "Wynik dodawania: " << dodawanie << endl;
    cout << "Wynik odejmowania: " << odejmowanie << endl;
    cout << "Wynik mnozenia: " << mnozenie << endl;
    cout << "Wynik dzielenia: " << dzielenie_text << endl;
    cout << "Reszta z dzielenia: " << reszta_text << endl;

    return 0;
}