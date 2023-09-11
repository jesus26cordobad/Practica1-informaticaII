//E20 P1
#include <iostream>
using namespace std;

int main() {
  int num, reversed_num = 0, residuo, original_num;
  
  cout << "Ingrese un numero: ";
  cin >> num;

  original_num = num;

  // Invertir el número
  while (num != 0) { //mientras que n sea distinto de 0
    residuo = num % 10; //sacamos unidad
    reversed_num = reversed_num * 10 + residuo; //ponemos unidad 
    num= num / 10; //sacamos decena o centena...
  }

  if (original_num == reversed_num) {
    cout << original_num << " es un palindromo.";
  } else {
    cout << original_num << " no es un palindromo.";
  }

  return 0;
}