#include <iostream>
using namespace std;

int main() {
  
    int N;
    cout << "Podaj liczbe calkowita dodatnia N: ";
    cin >> N;

    
    int suma = 0;
    int i = 1;

    
    while (i <= N) {
        suma += i;
        i++;
    }

    
    cout << "Suma liczb naturalnych od 1 do " << N << " wynosi: " << suma << endl;

    return 0;
}