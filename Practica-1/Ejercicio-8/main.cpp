//E8 P1
#include <iostream>

using namespace std;

int main()
{
    int N;
    int i=1;
    int fact=1;
    cout<<"Ingrese un número: ";
    cin>>N;
    while(i<=N){ //contador menor que el n
        if(i!=0){ 
        fact= fact * i; //actualizamos multiplicacion
        i++; //aumentamos contador
        }
    }
    cout<<N<<"!= "<<fact<<endl;
    return 0;
}
