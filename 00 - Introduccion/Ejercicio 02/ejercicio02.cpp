/*
Ejercicio 2:
Dado un número entero de la forma (AAAAMMDD), que representa una fecha válida, mostrar el día, mes y año que representa.*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    int fecha;
    cout << "Ingrese una fecha en formato AAAAMMDD: ";
    cin >> fecha;

    // Extraer el año
    int anio = fecha / 10000;
    // Extraer el mes
    int mes = (fecha / 100) % 100;
    // Extraer el día
    int dia = fecha % 100;

    cout << "Año: " << anio << endl;
    cout << "Mes: " << mes << endl;
    cout << "Día: " << dia << endl;

    return 0;
}