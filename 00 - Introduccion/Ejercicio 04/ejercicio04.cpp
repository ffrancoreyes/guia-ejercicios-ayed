/* Convertir grados Celsius a Fahrenheit y viceversa.*/

#include <iostream>
using namespace std;



int main() {
    double temperatura;

    // Solicita al usuario que ingrese la temperatura en grados Celsius
    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> temperatura;

    // Convierte la temperatura de Celsius a Fahrenheit
    double fahrenheit = (temperatura * 9.0 / 5.0) + 32.0;

    // Muestra el resultado de la conversión
    cout << temperatura << " grados Celsius son " << fahrenheit << " grados Fahrenheit." << endl;

    return 0;

}