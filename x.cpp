#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x;
    double y;
};

double calcularDistanciaMasCercana(Point puntos[], int n,
                                   const Point &pUsuario,
                                   int &indiceMasCercano) {
    if (n <= 0) { 
        indiceMasCercano = -1;
        return 0.0;
    }

    double dx = puntos[0].x - pUsuario.x;
    double dy = puntos[0].y - pUsuario.y;
    double menorDistancia = sqrt(dx * dx + dy * dy);
    indiceMasCercano = 0;

    for (int i = 1; i < n; i++) {
        dx = puntos[i].x - pUsuario.x;
        dy = puntos[i].y - pUsuario.y;
        double distancia = sqrt(dx * dx + dy * dy);

        if (distancia < menorDistancia) {
            menorDistancia = distancia;
            indiceMasCercano = i;
        }
    }

    return menorDistancia;
}

int main() {
    Point puntos[] = { {1,2}, {3,4}, {5,6}, {7,8} };
    int n = 4;

    Point usuario = {2, 3};
    int indiceMasCercano;
    double distancia = calcularDistanciaMasCercana(puntos, n, usuario, indiceMasCercano);

    cout << "El punto más cercano está en índice " << indiceMasCercano
         << " con distancia " << distancia << endl;

    return 0;
}
