#include <iostream>
#include <cmath>  // Para la función pow
using namespace std;

int main() {
    double principal, tasa, tiempo, monto;

    cout << "Ingrese el capital inicial (principal): ";
    cin >> principal;

    cout << "Ingrese la tasa de interés anual (en porcentaje): ";
    cin >> tasa;

    cout << "Ingrese el tiempo en años: ";
    cin >> tiempo;

    // Convertir tasa porcentual a decimal
    tasa = tasa / 100;

    // Fórmula del interés compuesto: M = P * (1 + r)^t
    monto = principal * pow(1 + tasa, tiempo);

    cout << "El monto acumulado después de " << tiempo << " años es: " << monto << endl;

    return 0;
}
