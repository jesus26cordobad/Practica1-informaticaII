//E24 P1
#include <iostream>
using namespace std;

int main() {
  int n;

  cout << "Ingrese un número: ";
  cin >> n;

  // Imprimir la primera fila de '+'
  for (int i = 0; i < n; i++) { //mientras i sea menor que n imprimir +
    cout << "+";
  }
  cout << endl; //cambio de linea
 //imprimir filas del medio
  for (int i = 0; i < n - 2; i++) { //n-2 por la primera y ultima fila
    cout << "+";
    for (int j = 0; j < n - 2; j++) { //imprimiendo los espacios n-2 porque esas son las del principio y final
      cout << " ";
    }
    cout << "+" << endl;
  }

  // Imprimir la última fila de '+'
  for (int i = 0; i < n; i++) { //lo mismo que en la primera
    cout << "+";
  }
  cout << endl;

  return 0;
}