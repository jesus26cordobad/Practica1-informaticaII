//E28 P1
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int num;
    double pi = 0.0;
    cout << "Ingrese el número de elementos usados en la aproximación: ";
    cin >> num;

    for(int i = 0; i < num; i++) {
        if(i % 2 == 0) {
            pi += (4.0 / (2.0 * i + 1));
        } else {
            pi -= (4.0 / (2.0 * i + 1));
        }
    }

    cout << "Pi es aproximadamente: " << setprecision(5) << pi << endl;

    return 0;
}