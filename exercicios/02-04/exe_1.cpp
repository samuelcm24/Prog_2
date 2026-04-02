// Desenvolva um programa que leia o nome completo de um usuario e sua idade.
// e exiba essa informações de forma organizada na tela, utilizando cin, getline e cout
#include <iostream>

using namespace std;

void Informacoes(){
    string nome;
    int idade;

    cout << "Digite seu nome completo: ";
    getline(cin, nome);

    cout <<"Digite sua idade: ";
    cin >> idade;

    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
}

int main(){
    Informacoes();
    return 0;
}