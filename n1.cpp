#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "¿Cuantos multiplos de 7 te gustaria ver? : ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cout << 7 * i << " ";
    }
    
    return 0;
}

