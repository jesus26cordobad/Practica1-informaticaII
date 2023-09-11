//E12 P1
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    
    cout << "Ingrese un numero: ";
    cin >> n;
    
    cout << "Potencias de " << n << ":" << endl;
    
    // Imprimir las potencias desde N1 hasta N5
    for (int i = 1; i <= 5; i++) { //iteramos de 1 hasta que la potencia es 5
        cout << n << "^" << i << " = " << pow(n, i) << endl; //potencia de base n con exponente el contador
    }
    
    return 0;
}