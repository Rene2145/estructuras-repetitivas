#include<iostream>
using namespace std;

int main() {
    int nota, aprobados = 0, desaprobados = 0, cantidad = 0;
    float suma = 0;
    char continuar;

    do {
    	cout << "Notas de los estudiantes de la UNJBG"<< endl;
        cout << "Ingresa una nota: ";
        cin >> nota;
        suma += nota;
        cantidad++;

        if(nota >= 11) {
            aprobados++;
        } else {
            desaprobados++;
        }

        cout << "¿Desea ingresar otra nota? (s/n): ";
        cin >> continuar;
    } while(continuar == 's' || continuar == 'S');

    cout << "Cantidad de aprobados: " << aprobados << endl;
    cout << "Cantidad de desaprobados: " << desaprobados << endl;
    cout << "Promedio del salon: " << suma / cantidad << endl;
    
    return 0;
}

