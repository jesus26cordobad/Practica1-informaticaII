//Problema 8 P1
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Ingrese tres numeros: ";
    cin >> a >> b >> c;

    int suma = 0;
    string multiplicadores = "";
    for (int i = 1; i < c; i++)
    {
        if (i % a == 0 || i % b == 0)
        {
            suma += i;
            multiplicadores += to_string(i) + "+";
        }
    }

    multiplicadores.pop_back();
    cout << multiplicadores << "=" << suma << "." << endl;

    return 0;
}