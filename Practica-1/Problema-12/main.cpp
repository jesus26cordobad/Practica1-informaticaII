//Problema 12 P1
#include <iostream>

using namespace std;

bool primo(int n); //funcion para saber si es primo

int main()
{
        int n,max{0}; //
    cout << "Ingrese un numero: " << endl;
    cin >> n;
    
    for (int i=1; i<n; i++) //si i es menor a n aumenta
    {
        if (primo(i)== true) //si i es primo
        {
            if (n%i==0) // y el residuo de n/i es 0
            {
                max = i; //el maximo es i
            }
        }
    }
    cout <<"El mayor factor primo de "<<n<<" es: "<<max << endl;
    
    return 0;
}

bool primo(int n)
{
    int d = 0;
    for (int j =1; j<=n; j++) //mientras j menor o igual a n
    {
        if (n%j==0) //residuo igual a 0
        {
            d++; //d incrementa
        }
    }
    if (d==2) //si d es 2, n es primo
    {
        return true;
    }
    else 
    {
        return false;
    }
}