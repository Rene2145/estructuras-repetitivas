#include<iostream>
using namespace std;

int main() {
    float gasto, suma = 0;
    char continuar;

    do {
        cout << "Por favor escribe el monto del gasto: ";
        cin >> gasto;
        suma += gasto;

        cout << "¿Deseas ingresar otro gasto? (s/n): ";
        cin >> continuar;
    } while(continuar == 's' || continuar == 'S');

    cout << "El total de gastos es: " << suma << endl;
    return 0;
}

