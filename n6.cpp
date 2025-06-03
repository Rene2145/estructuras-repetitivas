#include<iostream>
using namespace std;

int main() {
    int n, numero, suma = 0, contador = 0;
    cout << "<<< PROMEDIO DE NUMEROS NO NEGATIVOS >>> "<<endl<<" "<<endl;
    cout << "¿Cuantos numeros quieres ingresar? "<<endl;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Escribe un numero: "<<endl;
        cin >> numero;

        if(numero >= 0) {
            suma=suma+numero;
            contador=contador+1;
        }else{
			cout<<"¡Numero negativo no considerado!"<<endl;
		}
    }

    if(contador > 0) {
        cout << "El promedio de los numeros no negativos de la lista es: " <<endl<< (float)suma / contador << endl;
    } else {
        cout << "No se ingresaron numeros no negativos." << endl;
    }

    return 0;
}

