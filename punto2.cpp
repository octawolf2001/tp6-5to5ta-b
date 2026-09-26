#include <iostream>
using namespace std;

class Triangulo {
private:
    float lado1, lado2, lado3;

public:
    void inicializar() {
        cout << "Ingrese valor del lado 1: ";
        cin >> lado1;
        cout << "Ingrese valor del lado 2: ";
        cin >> lado2;
        cout << "Ingrese valor del lado 3: ";
        cin >> lado3;
    }

    void imprimirLadoMayor() {
        cout << "El lado mayor mide: ";
        if (lado1 >= lado2 && lado1 >= lado3) {
            cout << lado1 << endl;
        } else if (lado2 >= lado3) {
            cout << lado2 << endl;
        } else {
            cout << lado3 << endl;
        }
    }

    void esEquilatero() {
        if (lado1 == lado2 && lado2 == lado3) {
            cout << "El triangulo es equilatero." << endl;
        } else {
            cout << "El triangulo NO es equilatero." << endl;
        }
    }
};

int main() {
    Triangulo t;
    t.inicializar();
    t.imprimirLadoMayor();
    t.esEquilatero();
    return 0;
}
