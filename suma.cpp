#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "¿Cuántos números quieres ingresar? ";
    cin >> n;

    int* arr = new int[n]; 
    int suma = 0;

    cout << "Ingresa " << n << " números:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        suma += arr[i];
    }

    cout << "La suma de los elementos es: " << suma << endl;

    delete[] arr;  
    return 0;
}