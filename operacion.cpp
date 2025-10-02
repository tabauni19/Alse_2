#include <iostream>
#include <string>
#include <unordered_map>
#include <functional>
#include <cstdlib>   // exit, EXIT_FAILURE
#include <cctype>    // tolower

using std::string;

static void uso(const char* exeName) {
    std::cerr << "Ha ingresado valores inadecuados para el programa:\n";
    std::cerr << "USO " << exeName << " <num1> <operador> <num2>\n";
}

// Callbacks (funciones) para cada operación
double suma(double a, double b) { return a + b; }
double resta(double a, double b) { return a - b; }
double multiplicacion(double a, double b) { return a * b; }
double division(double a, double b) {
    if (b == 0.0) {
        std::cerr << "Error: division por cero no permitida.\n";
        std::exit(EXIT_FAILURE);
    }
    return a / b;
}

// Normaliza el operador (soporta "x" o "X" como multiplicación)
string normalizarOperador(const string& op) {
    if (op == "+") return "+";
    if (op == "-") return "-";
    if (op == "/" ) return "/";
    if (op == "*" ) return "*";
    if (op.size() == 1 && (op[0] == 'x' || op[0] == 'X')) return "*";
    return ""; // inválido
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        uso(argv[0]);
        return EXIT_FAILURE;
    }

    // argv[1] = num1, argv[2] = operador, argv[3] = num2
    const char* exe = argv[0];
    string opRaw = argv[2];
    string op = normalizarOperador(opRaw);
    if (op.empty()) {
        std::cerr << "Operador invalido. Use +, -, *, x o /\n";
        uso(exe);
        return EXIT_FAILURE;
    }

    double a = 0.0, b = 0.0;
    try {
        // std::stod permite enteros y decimales
        a = std::stod(argv[1]);
        b = std::stod(argv[3]);
    } catch (const std::exception&) {
        uso(exe);
        return EXIT_FAILURE;
    }

    // Mapa de callbacks: operador -> función
    std::unordered_map<string, std::function<double(double,double)>> ops = {
        {"+", suma},
        {"-", resta},
        {"*", multiplicacion},
        {"/", division}
    };

    double res = ops[op](a, b);
    std::cout << "El resultado de la operacion es " << res << '\n';
    return EXIT_SUCCESS;
}
