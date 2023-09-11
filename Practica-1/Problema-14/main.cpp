//Problema 14 P1
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "Ingrese un numero: " << endl;
    cin >> a;
    cout << "Ingrese otro numero: " << endl;
    cin >> b;

    int num = a*b;
    int numInvertido = 0, resto = num;

    while(resto != 0)
    {
        int digito = resto % 10;
        numInvertido = numInvertido * 10 + digito;
        resto /= 10;
    }

    cout <<a<<"*"<<b<<"= "<<num << endl;

    if (num == numInvertido) //si ambos números son iguales
    {
        cout << "Palindromo" << endl;
    }
    else //si no son iguales
    {
        cout << "No es palindromo " << endl;
    }
    return 0;
}