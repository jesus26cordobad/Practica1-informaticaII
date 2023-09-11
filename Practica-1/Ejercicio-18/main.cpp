//E18 P1
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int N;
    int x;
    cout<<"Ingrese un numero: ";
    cin>>N;
    x=sqrt(N); //x es la raiz de n
    if(x*x==N){ //si x al cuadrado es n
        cout<<N;
        cout<<" es cuadrado perfecto"<<endl;
    }
    else{ //si x al cuadrado no es n
        cout<<N;
        cout<<" NO es cuadrado perfecto"<<endl;
    }
    return 0;
}