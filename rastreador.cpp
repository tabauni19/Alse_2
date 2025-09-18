#include <iostream>
using namespace std;

int main() {
    int n;
    double distancia, total = 0;

    cout << "=== Rastreador de Distancias para Conductores de Entregas ===" << endl;
    cout << "Ingrese el numero de viajes realizados: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Ingrese la distancia del viaje " << i << " (en km): ";
        cin >> distancia;

        total += distancia;
    }

    cout << "\n=====================================" << endl;
    cout << "La distancia total recorrida es: " << total << " km" << endl;
    cout << "=====================================" << endl;

    return 0;
}
