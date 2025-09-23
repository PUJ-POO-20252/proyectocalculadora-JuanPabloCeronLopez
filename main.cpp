// main.cpp
#include <iostream>
#include "Matematicas.h"   // Incluimos nuestro contrato
#include "matriz_utils.h"  // Incluimos el nuevo módulo de matrices

using namespace std;

int main() {
    // --- Parte 1: Calculadora básica ---
    int x;
    cout << "Por favor ingrese un número: ";
    cin >> x;

    int y;
    cout << "Por favor ingrese otro número: ";
    cin >> y;

    int resultado_suma = sumar(x, y); // Funciona!
    int resultado_resta = restar(x, y); // Funciona!
    int resultado_multiplicar = multiplicar(x, y); // Funciona!
    int resultado_dividir = division(x, y); // Funciona!

    cout << "Suma: " << resultado_suma << endl;
    cout << "Resta: " << resultado_resta << endl;
    cout << "Multiplicacion: " << resultado_multiplicar << endl;
    cout << "Division: " << resultado_dividir << endl;

    // --- Parte 2: Trabajo con matrices ---
    int matrizA[2][3] = { {1, 2, 3}, {4, 5, 6} };
    int matrizB[2][3] = { {6, 5, 4}, {3, 2, 1} };
    int matrizResultado[2][3];

    // Llamamos a la función para sumar matrices
    sumarMatrices(matrizA, matrizB, matrizResultado);

    // Imprimimos las matrices
    cout << endl << "=== Operaciones con matrices ===" << endl;
    imprimirMatriz("Matriz A:", matrizA);
    imprimirMatriz("Matriz B:", matrizB);
    imprimirMatriz("Resultado (A+B):", matrizResultado);

    return 0;
}
