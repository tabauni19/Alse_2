#include <iostream>
using namespace std;

int main() {
    int n;
    double precio, cantidad, subtotal, total = 0;

    cout << "=== Calculadora de Costo Total en Tienda de Abastos ===" << endl;
    cout << "Ingrese la cantidad de productos distintos: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "\nProducto " << i << ":" << endl;
        cout << "Ingrese el precio unitario: ";
        cin >> precio;
        cout << "Ingrese la cantidad: ";
        cin >> cantidad;

        subtotal = precio * cantidad;
        total += subtotal;

        cout << "Subtotal del producto " << i << ": " << subtotal << endl;
    }

    cout << "\n=====================================" << endl;
    cout << "El costo total de la compra es: " << total << endl;
    cout << "=====================================" << endl;

    return 0;
}
