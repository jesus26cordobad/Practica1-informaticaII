//E26 P1
#include <iostream>
using namespace std;

int main() {
  int a, b, c;

  cout << "Ingrese tres números: ";
  cin >> a >> b >> c;

  // Comprobar si los números forman un triángulo
  if (a + b <= c || a + c <= b || b + c <= a) { //Si la suma de dos de los números es menor o igual al tercer número, entonces no se puede formar un triángulo
    cout << "Los números ingresados no forman un triángulo." << endl;
  }
  else {
    // Comprobar el tipo de triángulo
    if (a == b && b == c) { //todos los lados iguales
      cout << "El triángulo formado es equilátero." << endl;
    }
    else if (a == b || b == c || a == c) { //2 lados iguales
      cout << "El triángulo formado es isósceles." << endl;
    }
    else { //todos lados diferentes
      cout << "El triángulo formado es escaleno." << endl;
    }
  }

  return 0;
}