#include <iostream>
int main()
{
    int x, y;
    int aux;
    std::cout << "Ingrese dos numeros: "<<std::endl;
    std::cin >> x >> y;
    aux = x;
    x = y;
    y = aux;
    std::cout << x <<y;
    return 0;
}
