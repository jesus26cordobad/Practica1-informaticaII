//E4-P1
#include <iostream>

using namespace std;

int main()
{
    int A;
    int B;
    cout<<"Ingrese un numero : ";
    cin>>A;
    cout<<"Ingrese otro numero : ";
    cin>>B;
    if(A<B){
        cout<<"El menor es: "<<A;
    }
    else if(A>B){
        cout<<"El menor es: "<<B;
    }
    else{
        cout<<"Los numeros son iguales";
    }
    return 0;
}
