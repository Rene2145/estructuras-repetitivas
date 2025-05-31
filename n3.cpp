#include<iostream>
using namespace std;

int main() {
    int n, suma = 0;
    cout << "Este programa te ayudara a sumar los numeros naturales desde el 1 hasta cualquier numero que escribas"<< endl;
    cin >> n;
    for(int i = 1; i <= n; i=i+1) {
        suma=suma+i;
    }

    cout << "El resultado de la suma es: "<< endl;
    cout<<suma;
    return 0;
}

