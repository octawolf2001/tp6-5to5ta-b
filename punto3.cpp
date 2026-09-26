#include <iostream>
using namespace std;

class Cuadrado {
private:
    float lado;

public:
    void cargarLado() {
        cout << "Ingrese la longitud del lado del cuadrado: ";
        cin >> lado;
    }

    void imprimirPerimetro() {
        float perimetro = lado * 4;
        cout << "El perimetro del cuadrado es: " << perimetro << endl;
    }

    void imprimirSuperficie() {
        float superficie = lado * lado;
        cout << "La superficie (area) del cuadrado es: " << superficie << endl;
    }
};

int main() {
    Cuadrado c;
    c.cargarLado();
    c.imprimirPerimetro();
    c.imprimirSuperficie();
    return 0;
}
