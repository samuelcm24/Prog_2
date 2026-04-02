#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string nome;
    int idade;
    double nota1, nota2, nota3, media;

    cout << "Digite o nome completo do aluno: ";
    getline(cin, nome);

    cout << "Digite a idade: ";
    cin >> idade;

    cout << "Digite as tres notas: ";
    cin >> nota1 >> nota2 >> nota3;

    media = (nota1 + nota2 + nota3) / 3.0;

    cout << "Nome:  " << nome << endl;
    cout << "Idade: " << idade << endl;
    cout << "Nota 1: " << fixed << setprecision(2) << nota1 << endl;
    cout << "Nota 2: " << fixed << setprecision(2) << nota2 << endl;
    cout << "Nota 3: " << fixed << setprecision(2) << nota3 << endl;
    cout << "Media:  " << fixed << setprecision(2) << media << endl;

    return 0;
}