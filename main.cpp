// main.cpp
#include <iostream>
#include "Matematicas.h" // Incluimos nuestro contrato

int main() {
    int x ;
    std::cout << "Por favor ingrese un número: ";
    std::cin >> x;
    int y = 4;

    int resultado_suma = sumar(x, y); // Funciona!
    int resultado_resta = restar(x, y); // Funciona!
    int resultado_multiplicar = multiplicar(x, y); // Funciona!
    int resultado_dividir = division(x, y); // Funciona!

    std::cout << "Suma: " << resultado_suma << std::endl;
    std::cout << "Resta: " << resultado_resta << std::endl;
    std::cout << "Multiplicacion: " << resultado_multiplicar << std::endl;
    std::cout << "Division: " << resultado_dividir << std::endl;

    return 0;
}
