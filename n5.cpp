#include<iostream>
using namespace std;

int main() {
    int nota, aprobados = 0, desaprobados = 0, cantidad = 0;
    float suma = 0;
    char continuar;
        cout << "+-----------------------------------------+" << endl;
        cout << "|  Registro de notas - Estudiantes UNJBG  |" << endl;
        cout << "+-----------------------------------------+" << endl;
        cout << "" << endl;    do {
        do{
			cout << "Ingresa una nota: "<<endl;
        	cin >> nota;
			if(nota < 0 or nota > 20) {
			cout << "¡Nota incorrecta!La nota debe de estar entre 0 y 20"<<endl;
		
		}
		}while(nota < 0 or nota > 20);
            
        suma = suma + nota;
        cantidad++;

        if(nota >= 11) {
            aprobados++;
        } else {
            desaprobados++;
        }

        cout << "¿Quieres ingresar otra nota? (Si/No): "<<endl;
        cout<<"1 <- Si"<<endl;
        cout<<"2 <- No"<<endl;
        cin >> continuar;
    } while(continuar == '1' );
    cout << " " << endl;
    cout << "RESULTADOS " << endl;
    cout << "Cantidad de aprobados: " << aprobados << endl;
    cout << "Cantidad de desaprobados: " << desaprobados << endl;
    cout << "Promedio del salon: " << suma / cantidad << endl;
    
    return 0;
}

