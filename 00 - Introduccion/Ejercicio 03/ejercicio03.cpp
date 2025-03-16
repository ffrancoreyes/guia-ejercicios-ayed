/*
Ejercicio 3:
Calcular el área y el perímetro de un rectángulo dados su base y altura.
*/

#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    double base, altura, area, perimetro;

    // Solicitar al usuario la base y la altura del rectángulo
    cout << "Ingrese la base del rectángulo: ";
    cin >> base;
    cout << "Ingrese la altura del rectángulo: ";
    cin >> altura;

    // Calcular el área del rectángulo
    area = base * altura;

    // Calcular el perímetro del rectángulo
    perimetro = 2 * (base + altura);

    // Mostrar los resultados
    cout << "El área del rectángulo es: " << area << endl;
    cout << "El perímetro del rectángulo es: " << perimetro << endl;

    return 0;
}