#include <iostream>
using namespace std;

int main() {
    int numero, soma = 0;

    cout << "Digite um numero inteiro positivo: ";
    cin >> numero;

    if (numero <= 0) {
        cout << "Numero invalido." << endl;
        return 0;
    }

    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            soma += i;
        }

        if (soma > numero) {
            break;
        }
    }

    if (soma == numero) {
        cout << "Numero perfeito" << endl;
    } else {
        cout << "Nao e perfeito" << endl;
    }

    return 0;
}