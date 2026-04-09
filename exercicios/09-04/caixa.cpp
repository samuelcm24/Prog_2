#include <iostream>
using namespace std;

int main() {
    double saldo = 1000.0, valor;
    int opcao;

    do {
        cout << "\n===== MENU =====" << endl;
        cout << "1. Ver saldo" << endl;
        cout << "2. Depositar" << endl;
        cout << "3. Sacar" << endl;
        cout << "4. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Saldo atual: R$ " << saldo << endl;
                break;

            case 2:
                cout << "Digite o valor do deposito: ";
                cin >> valor;
                if (valor > 0) {
                    saldo += valor;
                    cout << "Deposito realizado com sucesso." << endl;
                } else {
                    cout << "Valor invalido para deposito." << endl;
                }
                break;

            case 3:
                cout << "Digite o valor do saque: ";
                cin >> valor;
                if (valor > 0 && valor <= saldo) {
                    saldo -= valor;
                    cout << "Saque realizado com sucesso." << endl;
                } else {
                    cout << "Saque invalido. Verifique o valor e o saldo." << endl;
                }
                break;

            case 4:
                cout << "Saindo do sistema..." << endl;
                break;

            default:
                cout << "Opcao invalida." << endl;
        }

    } while (opcao != 4);

    return 0;
}