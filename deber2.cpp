#include <iostream>
using namespace std;

int main() {
    string nombre;
    float nota1, nota2, promedio;

    cout << "Ingrese su nombre: ";
    cin >> nombre;

    cout << "Ingrese la primera nota: ";
    cin >> nota1;

    cout << "Ingrese la segunda nota: ";
    cin >> nota2;

    promedio = (nota1 + nota2) / 2;

    cout << "\nEstudiante: " << nombre << endl;
    cout << "Promedio: " << promedio << endl;

    return 0;
}
