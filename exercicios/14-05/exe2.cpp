#include <iostream>
using namespace std;

int main() {
    double a[100];
    double *aPtr = a;

    int quantidade;
    double soma = 0;
    double media;

    cout << "Quantos valores deseja digitar? ";
    cin >> quantidade;

    if (quantidade < 1 || quantidade > 100) {
        cout << "Quantidade invalida. Digite um valor entre 1 e 100." << endl;
        return 0;
    }

    for (int j = 0; j < quantidade; j++) {
        cout << "Digite o valor " << j + 1 << ": ";
        cin >> *(a + j);
    }

    for (int j = 0; j < quantidade; j++) {
        soma += *(aPtr + j);
    }

    media = soma / quantidade;

    cout << "Soma dos valores: " << soma << endl;
    cout << "Media dos valores: " << media << endl;

    return 0;
}