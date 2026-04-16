

#include <iostream>
using namespace std;

void soma_fun(int a, int b){
    int soma = a + b;
    cout << "A soma eh: " << soma << endl;
}

int main(){
    int num1, num2;
    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o segundo numero: ";
    cin >> num2;
    soma_fun(num1, num2);
    return 0;
}