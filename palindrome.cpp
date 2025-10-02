#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0) return false;  // los negativos no son palíndromos

    long long revertido = 0;
    int original = x;

    while (x != 0) {
        int digito = x % 10;
        revertido = revertido * 10 + digito;
        x /= 10;
    }

    return revertido == original;
}

int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    if (isPalindrome(num))
        cout << num << " es un palindromo." << endl;
    else
        cout << num << " no es un palindromo." << endl;

    return 0;
}
