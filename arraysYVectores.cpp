//
//  arraysYVectores.cpp
//  C++
//
//  Created by Danni Brito on 12/8/20.
//

#include "arraysYVectores.hpp"

// Estructuras de datos básicas: Arrays
// Se guardan valores del mismo tipo uno al lado del otro
// TDD nombre[tamaño];

int main() {
  //                 0    1    2    3    4
  float notas[5] = {1.2, 3.4, 5.6, 7.8, 9.0};

  int tamanio = 10;

  int numeros[tamanio];

  // indice += 1
  // indice++
  // indice = indice + 1

  for(int indice = 0; indice < tamanio; indice += 1) {
    // Console OUTput -> Imprime en la consola
    cout << "Ingrese el elemento " << indice + 1 << ": ";
    // Console INput -> lee de la consola
    cin >> numeros[indice];
  }

  return 0;
}

