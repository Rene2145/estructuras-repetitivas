#include<iostream>
using namespace std;

int main() {
    int n, numero, suma = 0, contador = 0;
    cout << "¿Cuantos numeros quieres ingresar? ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Escribe un numero: ";
        cin >> numero;

        if(numero >= 0) {
            suma += numero;
            contador++;
        }
    }

    if(contador > 0) {
        cout << "El promedio de los numeros no negativos de la lista es: " << (float)suma / contador << endl;
    } else {
        cout << "No se ingresaron numeros no negativos." << endl;
    }

    return 0;
}

