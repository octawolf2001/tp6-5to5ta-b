#include <iostream>
#include <string>
using namespace std;

class Empleado {
private:
    string nombre;
    float sueldo;

public:
    void cargar() {
        cout << "Ingrese el nombre del empleado: ";
        getline(cin, nombre);
        cout << "Ingrese el sueldo: ";
        cin >> sueldo;
    }

    void imprimirDatos() {
        cout << "\n--- Datos del Empleado ---" << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Sueldo: $" << sueldo << endl;
    }

    void pagarImpuestos() {
        if (sueldo > 3000) {
            cout << "Debe pagar impuestos." << endl;
        } else {
            cout << "NO debe pagar impuestos." << endl;
        }
    }
};

int main() {
    Empleado e;
    e.cargar();
    e.imprimirDatos();
    e.pagarImpuestos();
    return 0;
}
