

#include <iostream>
using namespace std;

void conversao(double dolares){
    double reais = dolares * 5.50;
    cout << "A quantia em reais eh: " << reais << endl;
}

int main(){
    double dolares;
    cout << "Digite a quantia em dolares: ";
    cin >> dolares;
    conversao(dolares);
    return 0;
}