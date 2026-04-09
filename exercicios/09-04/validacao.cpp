#include <iostream>
using namespace std;

int main() {
    int idade, autorizacao, nivel;

    cout << "Digite a idade: ";
    cin >> idade;

    cout << "Digite a autorizacao (0 = nao, 1 = sim): ";
    cin >> autorizacao;

    cout << "Digite o nivel (1 a 3): ";
    cin >> nivel;

    if (idade < 16) {
        cout << "Acesso negado." << endl;
    } 
    else if (idade >= 16 && idade <= 17) {
        if (autorizacao == 1) {
            cout << "Acesso autorizado com permissao dos responsaveis." << endl;
        } else {
            cout << "Acesso negado. Menor de idade sem autorizacao." << endl;
        }
    } 
    else { // idade >= 18
        switch (nivel) {
            case 1:
                cout << "Acesso basico liberado." << endl;
                break;
            case 2:
                cout << "Acesso intermediario liberado." << endl;
                break;
            case 3:
                cout << "Acesso total liberado." << endl;
                break;
            default:
                cout << "Erro: nivel invalido." << endl;
        }
    }

    return 0;
}