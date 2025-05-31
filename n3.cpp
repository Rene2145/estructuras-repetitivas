#include<iostream>
using namespace std;

int main() {
    int n, suma = 0;
    cout << "Calcularemos la suma de los numeros desde 1 hasta el numero que escribas "<< endl;
    cout << "Escribe un numero : ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        suma += i;
    }

    cout << "El resultado de la suma es: " << suma << endl;
    return 0;
}

