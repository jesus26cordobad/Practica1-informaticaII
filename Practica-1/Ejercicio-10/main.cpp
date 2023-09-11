//E10 P1
#include <iostream>

using namespace std;

int main()
{
    int N;
    int i=1;
    int mult=1;
    cout<<"Ingrese un numero: ";
    cin>>N;
    cout<<"Multiplos de "<<N<<" menores que 100:"<<endl;
    while(mult<100){ //mientras que la mult sea menor que 100
        cout<<mult<<endl;
        i++; //incrementamos contador
        mult= N * i; // multiplicamos n por contador
    }
    return 0;
}
