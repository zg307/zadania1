#include <iostream>
using namespace std;

int main() {
    // Deklaracja zmiennej na punkty
    int punkty;

    // Pobranie punktów od użytkownika
    cout << "Podaj liczbe punktow (0-100): ";
    cin >> punkty;

    // Sprawdzanie poprawności danych
    if (punkty < 0 || punkty > 100) {
        cout << "Bledna liczba punktow! Punkty musza byc w zakresie od 0 do 100." << endl;
    } else {
        // Przypisanie odpowiedniej oceny
        if (punkty >= 0 && punkty <= 49) {
            cout << "Ocena niedostateczna" << endl;
        } else if (punkty >= 50 && punkty <= 69) {
            cout << "Ocena dostateczna" << endl;
        } else if (punkty >= 70 && punkty <= 84) {
            cout << "Ocena dobra" << endl;
        } else if (punkty >= 85 && punkty <= 99) {
            cout << "Ocena bardzo dobra" << endl;
        } else if (punkty == 100) {
            cout << "Ocena celujaca" << endl;
        }
    }

    return 0;
}