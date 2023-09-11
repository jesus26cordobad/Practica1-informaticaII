//Problema 16 P1
#include <iostream>
using namespace std;

int main()
{
    int k;
    cout << "Ingrese un numero: ";
    cin >> k;

    int semilla = 0, maxTerminos = 0;
    string serieMasLarga = "";
    for (int i = 1; i < k; i++)
    {
        int n = i, terminos = 1;
        string serie = to_string(n) + ", ";
        while (n != 1)
        {
            if (n % 2 == 0)
            {
                n /= 2;
            }
            else
            {
                n = 3 * n + 1;
            }
            terminos++;
            serie += to_string(n) + ", ";
        }
        if (terminos > maxTerminos)
        {
            semilla = i;
            maxTerminos = terminos;
            serieMasLarga = serie;
        }
    }

    serieMasLarga.pop_back();
    serieMasLarga.pop_back();
    cout << "La serie mas larga es con la semilla: " << semilla << ", teniendo " << maxTerminos << " terminos." << endl;
    cout << "La serie es: " << serieMasLarga << "." << endl;

    return 0;
}