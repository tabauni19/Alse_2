#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    double principal, tasa, tiempo, monto;

    cout << "Ingrese el capital inicial (principal): ";
    cin >> principal;

    cout << "Ingrese la tasa de interés anual (en porcentaje): ";
    cin >> tasa;

    cout << "Ingrese el tiempo en años: ";
    cin >> tiempo;

    tasa = tasa / 100;

    monto = principal * pow(1 + tasa, tiempo);

    cout << "El monto acumulado después de " << tiempo << " años es: " << monto << endl;

    return 0;
}
