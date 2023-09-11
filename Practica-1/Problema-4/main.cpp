//Problema 4 P1
#include <iostream>
using namespace std;

int main()
{
    int hora, duracion;
    cout << "Ingrese un numero entero: "; //Representa una hora del dia en un reloj de 24 horas
    cin >> hora;

    if (hora < 0 || hora >= 2400 || hora % 100 >= 60) //verifica si la hora es válida
    {
        cout << hora << " es un tiempo invalido." << endl;
        return 0;
    }

    cout << "Ingrese otro numero entero: "; //Tiempo de duración de la misma manera
    cin >> duracion;

    if (duracion < 0 || duracion >= 2400 || duracion % 100 >= 60) //verifica si la duración es válida
    {
        cout << duracion << " es un tiempo invalido." << endl;
        return 0;
    }

    int minutos = hora % 100;
    int horas = hora / 100;
    int minutosDuracion = duracion % 100;
    int horasDuracion = duracion / 100;

    if (minutos + minutosDuracion >= 60) //verifica si los minutos sumados son mayores o iguales a 60
    {
        horasDuracion++; //agrega una hora adicional si los minutos sumados son mayores o iguales a 60
        minutos -= 60; //resta 60 minutos de la hora original
    }

    int totalMinutos = minutos + minutosDuracion;
    int totalHoras = horas + horasDuracion;
    totalHoras %= 24;

    cout << "La hora es " << totalHoras * 100 + totalMinutos << "." << endl;

    return 0;
}
