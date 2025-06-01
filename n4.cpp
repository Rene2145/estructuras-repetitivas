#include<iostream>
using namespace std;

int main() {
    float gasto, suma = 0;
    cout << "================================="<<endl;
    cout << "REGISTRO DE GASTOS PARA EL VIAJE"<<endl;
    cout << "================================="<<endl;
    cout << ""<<endl;
    char continuar;
    do {
		cout << "Por favor escribe el monto del gasto:"<<endl;
        cin >> gasto;
        suma=suma+gasto;

        cout << "Desea ingresar un nuevo gasto? "<<endl;
        cout<<"1 <- Si"<<endl;
        cout<<"2 <- No"<<endl;
        cin >> continuar;
    } while(continuar == '1');

    cout << "El total de gastos es: "<<endl;
    cout<<"S/ "<<suma<<endl;
    cout<< "¡BUEN VIAJE!";
    return 0;
}

