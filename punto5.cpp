#include <iostream>
using namespace std;

class Operaciones {
private:
    int val1, val2;

public:
    void cargarValores() {
        cout << "Ingrese el primer entero: ";
        cin >> val1;
        cout << "Ingrese el segundo entero: ";
        cin >> val2;
    }

    void suma() {
        cout << "Suma: " << (val1 + val2) << endl;
    }

    void resta() {
        cout << "Resta: " << (val1 - val2) << endl;
    }

    void multiplicacion() {
        cout << "Multiplicacion: " << (val1 * val2) << endl;
    }

    void division() {
        if (val2 != 0) {
            cout << "Division: " << (static_cast<float>(val1) / val2) << endl;
        } else {
            cout << "Division: No se puede dividir por cero." << endl;
        }
    }
};

int main() {
    Operaciones op;
    op.cargarValores();
    cout << "\n--- Resultados ---" << endl;
    op.suma();
    op.resta();
    op.multiplicacion();
    op.division();
    return 0;
}
