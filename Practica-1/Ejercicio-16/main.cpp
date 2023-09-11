//E16 P1
#include <iostream>

using namespace std;

int main()
{
    int N;
    int A;
    int promedio;
    int suma=0;
    int cantidad;
    cout<<"Ingrese numeros: ";
    cin>>N;
    suma= suma+N;
    for(cantidad=0;N!=0;cantidad++){
        cout<<"Ingrese numeros: ";
        cin>>N;
        suma=suma+N;
    }
    
    promedio=suma/cantidad;
    cout<<"El promedio es: "<<promedio;
    return 0;
}