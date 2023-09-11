//Problema 10 P1
#include <iostream>
using namespace std;

int main() {
   int n;
   cout << "Ingrese un número: ";
   cin >> n; //numero del primo

   int contador = 0;
   int numero = 2;

   // iterar hasta encontrar el enésimo número primo
   while (contador < n) {
      bool es_primo = true;
      for (int i = 2; i*i <= numero; i++) { //mientras i al cuadrado sea menor o igual a numero
         if (numero % i == 0) {             //si hay un numero mayor a i*i ya habria sido encontrado
            es_primo = false; //si divide el numero no es primo
            break;
         }
      }
      if (es_primo) { //si es primo aumentamos contador para encontrar el enesimo
         contador++;
      }
      if (contador == n) { //si el contador es igual a n, encontramos el enesimo
         break;
      }
      numero++; //continuamos buscando
   }

   cout << "El primo numero " <<n<<" es: "<<numero << endl;

   return 0;
}