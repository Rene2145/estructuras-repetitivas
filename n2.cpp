#include<iostream>
using namespace std;

int main() {
    int numero;
    cout << "Por favor escribe cualquier numero: ";
    cin >> numero;
    
    while(numero >= 0) {
        cout << "Escribe otro numero.: ";
        cin >> numero;
    }
    
    cout << "Fin de la captura" << endl;
    
    return 0;
}

