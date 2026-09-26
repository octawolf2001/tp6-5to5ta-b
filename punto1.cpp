#include <iostream>
using namespace std;

int main() {
    char nombre1[40], nombre2[40];
    int edad1, edad2;

    // Carga de datos Persona 1
    cout << "--- Carga Persona 1 ---" << endl;
    cout << "Ingrese nombre: ";
    cin.getline(nombre1, 40);
    cout << "Ingrese edad: ";
    cin >> edad1;
    cin.ignore(); // Limpiar el búfer para el próximo getline

    // Carga de datos Persona 2
    cout << "\n--- Carga Persona 2 ---" << endl;
    cout << "Ingrese nombre: ";
    cin.getline(nombre2, 40);
    cout << "Ingrese edad: ";
    cin >> edad2;

    // Impresión de datos Persona 1
    cout << "\n==========================" << endl;
    cout << "Nombre Persona 1: " << nombre1 << endl;
    cout << "Edad: " << edad1 << endl;
    if (edad1 >= 18) {
        cout << "Es mayor de edad." << endl;
    } else {
        cout << "No es mayor de edad." << endl;
    }

    // Impresión de datos Persona 2
    cout << "\nNombre Persona 2: " << nombre2 << endl;
    cout << "Edad: " << edad2 << endl;
    if (edad2 >= 18) {
        cout << "Es mayor de edad." << endl;
    } else {
        cout << "No es mayor de edad." << endl;
    }

    return 0;
}
