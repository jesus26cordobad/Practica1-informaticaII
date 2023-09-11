//E22 P1
#include <iostream>
using namespace std;

int main() {
  int segundos, horas, minutos, segundos_restantes;

  cout << "Ingrese una cantidad de segundos: ";
  cin >> segundos;

  horas = segundos / 3600; // Convertir a horas
  segundos_restantes = segundos % 3600; // Calcular segundos restantes
  minutos = segundos_restantes / 60; // Convertir a minutos
  segundos_restantes = segundos_restantes % 60; // Calcular segundos restantes restantes

  cout << "La cantidad de segundos " << segundos << " equivale a " 
       << horas << ":" << minutos << ":" << segundos_restantes << endl;

  return 0;
}