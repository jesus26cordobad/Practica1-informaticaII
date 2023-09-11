//E30 P1
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Inicializar la semilla del generador de números aleatorios

    int A = rand() % 101; // Generar un número aleatorio entre 0 y 100
    int B;
    int intentos = 0;

    cout << "Adivina el número que estoy pensando (entre 0 y 100): ";

    do {
        cin >> B;
        intentos++;

        if(B > A) {
            cout << "El número que ingresaste es mayor. Intenta de nuevo: ";
        } else if(B < A) {
            cout << "El número que ingresaste es menor. Intenta de nuevo: ";
        }
    } while(B != A);

    cout << "¡Correcto! El número era " << A << ". Lo adivinaste en " << intentos << " intentos." << endl;

    return 0;
}