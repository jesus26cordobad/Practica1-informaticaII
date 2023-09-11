//E6 P1
#include <iostream>

using namespace std;

int main()
{
    int A;
    int B;
    int resul=0;
    cout<<"Ingrese un numero: "<<endl;
    cin>>A;
    cout<<"Ingrese su potencia: "<<endl;
    cin>>B;
    int x=1;
    while(x<B){ //contador menor que potencia
    if(resul<A){ 
        resul=A*A; //base por base 1
    }
    else{
        resul=resul*A; //actualizamos resultado
    }
    x++; //incrementamos contador
    }
    cout<<A<<"^"<<B<<"="<<resul<<endl;
    return 0;
}
