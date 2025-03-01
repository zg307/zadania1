#include <iostream>
using namespace std;

int main() {
    // Deklaracja zmiennych
    double masa_ciala, wzrost, bmi;

    // Pobranie danych od użytkownika
    cout << "Podaj mase ciala w kilogramach: ";
    cin >> masa_ciala;

    cout << "Podaj wzrost w metrach: ";
    cin >> wzrost;

    // Obliczenie BMI
    bmi = masa_ciala / (wzrost * wzrost);

    // Wyświetlenie wyniku BMI
    cout << "Twoje BMI wynosi: " << bmi << endl;

    // Interpretacja BMI
    if (bmi < 18.5) {
        cout << "Kategoria: Niedowaga" << endl;
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        cout << "Kategoria: W normie" << endl;
    } else if (bmi >= 25 && bmi <= 29.9) {
        cout << "Kategoria: Nadwaga" << endl;
    } else {
        cout << "Kategoria: Otylosc" << endl;
    }

    return 0;
}