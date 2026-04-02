/*
Crie um programa que leia o nome completo de um usuário e sua idade e altura de uma pesoa, armazenando
corretamente cada tipo de dado e exibindo todas as informações de forma clara
*/

#include <iostream>

using namespace std;

void Informacoes(){
    string nome;
    int idade;
    float altura;

    cout << "Digite seu nome completo: ";
    getline(cin, nome);

    cout <<"Digite sua idade: ";
    cin >> idade;

    cout <<"Digite sua altura: ";
    cin >> altura;

    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
    cout << "Altura: " << altura << " metros" << endl;
}

int main(){
    Informacoes();
    return 0;
}