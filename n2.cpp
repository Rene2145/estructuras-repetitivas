#include <iostream>
using namespace std;

int main() {
	double numero_decimal;
    int numero_positivo;
    cout << "Por favor escribe un numero positivo: "<<endl;
    cin >> numero_decimal;
    numero_positivo = (int)numero_decimal;
    
    while(numero_positivo >= 0) {
        cout << "Escribe otro numero"<<endl;
        cin >> numero_decimal;
        numero_positivo=(int)numero_decimal;
    }
    cout << "Fin de la captura" << endl;
    
    return 0;
}

