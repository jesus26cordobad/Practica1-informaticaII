//Problema 2 P1
#include <iostream>

using namespace std;

int main()
{
    int n,bc,bv,bd,bcin,bdos,bmil,mq,mdos,mcien,mcin,faltante; //Iniciamos todas variables enteras 
    cout << "Ingrese el valor: " << endl;
    cin >> n; //ingresamos valor a sacar

    bc = n/50000; //cuando dividimos al ser enteras las variables nos da cuantas veces caben las cosas
    cout <<"50000: " << bc << endl;
    n= n%50000; //agarramos el residuo de la division 

    bv = n/20000; //dividimos el residuo de la anterior operacion con el nuevo billete o moneda
    cout <<"20000: " << bv << endl;
    n = n%20000;

    bd = n/10000;
    cout <<"10000: " << bd << endl;
    n = n%10000;

    bcin = n/5000;
    cout <<"5000: " << bcin << endl;
    n = n%5000;

    bdos = n/2000;
    cout <<"2000: " << bdos << endl;
    n = n%2000;

    bmil =n/1000;
    cout <<"1000: " << bmil << endl;
    n = n%1000;

    mq = n/500;
    cout <<"500: " << mq << endl;
    n = n%500;

    mdos = n/200;
    cout <<"200: " << mdos << endl;
    n = n%200;

    mcien = n/100;
    cout <<"100: " << mcien << endl;
    n = n%100;

    faltante = n; //residuo que queda de todas las operaciones
    cout <<"Faltante: " << faltante << endl;

    return 0;
}