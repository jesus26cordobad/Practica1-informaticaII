//Problema 6 P1
#include <iostream>

using namespace std;

float factorial(int n); //funcion con factorial

 int main()
{
    int numero;
    float e = 0.0; //e va acomulando
    cout << "Ingrese un numero: " << endl;
    cin >> numero; //numero para factorial

    for(int i=0; i<numero; i++) //i aumenta hasta que sea igual que el numero que ingresamos
    {
        e = e + (1/factorial(i)); // factorial de i para que cuando llegue a i pare
    }
    cout << "e es aproximadamente : " << e << endl;


    return 0;

}

float factorial(int n)
    {
        int f=1;
        for(int j = 1; j<=n; j++)
        {
            f = f*j;
        }

        return f;
    }