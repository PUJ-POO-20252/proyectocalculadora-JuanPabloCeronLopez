#ifndef MATRIZ_UTILS_H
#define MATRIZ_UTILS_H

#include <string>  // Para usar std::string
using namespace std;

// Función que suma dos matrices 2x3
void sumarMatrices(const int (&a)[2][3], const int (&b)[2][3], int (&resultado)[2][3]);

// Función que imprime una matriz 2x3 con un título
void imprimirMatriz(const string& titulo, const int (&mat)[2][3]);

#endif
