#include<iostream>
using namespace std;

int main() {
    int n, suma = 0; 
	double contador = 0;
    double numero, promedio;
    cout << "<<< PROMEDIO DE NUMEROS NO NEGATIVOS >>> "<<endl<<" "<<endl;
    cout << "¿Cuantos numeros quieres ingresar? "<<endl;
    cin >> n;
    
    if (n<0){
    	cout<< "La cantidad de numeros tiene que ser una cantidad positiva";
	} else{
	for(int i = 0; i < n; i++) {
        cout << "Escribe un numero: "<<endl;
        cin >> numero;

        if(numero >= 0) {
            suma=suma+numero;
            contador=contador+1;
        }else{
			cout<<"¡Numeros negativo no considerado!"<<endl;
		}
    }
    
    if(contador > 0) {
    	promedio = suma / contador;
        cout << "El promedio de los numeros no negativos de la lista es: " <<endl<<promedio<< endl;
    } else{
    	cout<< "No se ingresaron numeros";
	}
}

    return 0;
}

