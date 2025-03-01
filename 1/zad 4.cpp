#include <iostream>
#include <string>

int main() {
    std::string imie;
    int wiek;

    // Pobranie imienia
    std::cout << "Podaj swoje imie: ";
    std::getline(std::cin, imie);

    // Pobranie wieku
    std::cout << "Podaj swoj wiek: ";
    std::cin >> wiek;

    // Wyświetlenie wiadomości powitalnej
    std::cout << "Witaj, " << imie << "! Masz " << wiek << " lat." << std::endl;

    return 0;
}
