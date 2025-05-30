#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "¿Cuantos multiplos de 7 te gustaria ver? : "<<endl;
    cin >> n;
 	cout << "Excelente, estos serian los multiplos de 7: "<<endl;
    for(int i = 1; i <= n; i=i+1) {
        cout << 7 * i << " ";
    }
    return 0;
}

