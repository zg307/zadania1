#include <iostream>
using namespace std;

int main() {
    int N;

    
    cout << "Podaj liczbe N (dodatnia): ";
    cin >> N;

    
    if (N <= 0) {
        cout << "Błąd: N musi być liczbą dodatnią!" << endl;
        return 1; 
    }

    int i = 2; 

    
    while (i <= N) {
        cout << i << " ";
        i += 2; 
    }

    cout << endl;
    return 0;
}