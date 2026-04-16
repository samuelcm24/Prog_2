
#include <iomanip>
#include <iostream>

using namespace std;

const int ANO = 2;
const int TRIMESTRE = 4;

void lerDespesas(double despesas[ANO][TRIMESTRE]) {
    for (int i = 0; i < ANO; i++) {
        for (int j = 0; j < TRIMESTRE; j++) {
            cout << "Digite a despesa do trimestre " << j + 1
                 << " do ano " << i + 1 << ": ";
            cin >> despesas[i][j];
        }
    }
}

double calcularTotal(const double despesas[ANO][TRIMESTRE]) {
    double total = 0.0;

    for (int i = 0; i < ANO; i++) {
        for (int j = 0; j < TRIMESTRE; j++) {
            total += despesas[i][j];
        }
    }

    return total;
}

void exibirTabela(const double despesas[ANO][TRIMESTRE]) {
    cout << fixed << setprecision(2);
    cout << "\nTabela de despesas\n";
    cout << "Ano/Trimestre";

    for (int j = 0; j < TRIMESTRE; j++) {
        cout << "\tT" << j + 1;
    }

    cout << '\n';

    for (int i = 0; i < ANO; i++) {
        cout << "Ano " << i + 1;

        for (int j = 0; j < TRIMESTRE; j++) {
            cout << "\t\t" << despesas[i][j];
        }

        cout << '\n';
    }

    cout << "\nTotal de despesas nos dois anos: "
         << calcularTotal(despesas) << '\n';
}

int main() {
    double despesas[ANO][TRIMESTRE];

    lerDespesas(despesas);
    exibirTabela(despesas);

    return 0;
}
