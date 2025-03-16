/*
Ejercicio 1
Dados dos valores enteros A y B, informar la suma, la resta, el producto y la división.*/

#include <iostream>
using namespace std;

int main(){
    //declaramos las variables A y B
    int numA, numB;
    float division;
    //pedimos al usuario que ingrese el valor de A
    cout << "Ingrese el valor de A: ";
    cin >> numA;
    //pedimos al usuario que ingrese el valor de B
    cout << "Ingrese el valor de B: ";
    cin >> numB;

    //realizamos las operaciones
    cout << "La suma de A y B es: " << numA + numB << endl;
    cout << "La resta de A y B es: " << numA - numB << endl;
    cout << "El producto de A y B es: " << numA * numB << endl;
    division = numA / numB;
    cout << "La division de A y B es: " << division << endl;

    return 0;
}