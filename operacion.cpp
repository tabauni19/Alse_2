#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

float suma(float a, float b) { return a + b; }
float resta(float a, float b) { return a - b; }
float multiplicacion(float a, float b) { return a * b; }
float division(float a, float b) {
    if (b == 0) {
        cerr << "Error: division por cero no permitida." << endl;
        exit(EXIT_FAILURE);
    }
    return a / b;
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        cerr << "Uso: " << argv[0] << " <num1> <operador> <num2>" << endl;
        return EXIT_FAILURE;
    }

    try {
        float num1 = stof(argv[1]);
        string operador = argv[2];
        float num2 = stof(argv[3]);
        float resultado = 0;

        if (operador == "+") resultado = suma(num1, num2);
        else if (operador == "-") resultado = resta(num1, num2);
        else if (operador == "*" || operador == "x") resultado = multiplicacion(num1, num2);
        else if (operador == "/") resultado = division(num1, num2);
        else {
            cerr << "Operador invalido. Use +, -, *, x o /" << endl;
            return EXIT_FAILURE;
        }

        cout << "El resultado de la operacion es " << resultado << endl;
    } catch (exception& e) {
        cerr << "Ha ingresado valores inadecuados para el programa.\n";
        cerr << "USO: " << argv[0] << " <num1> <operador> <num2>" << endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
