#include <stdio.h>

int main() {
  
  // Declaracion de variables
  // guardo un espacio dentro de memoria
  // tipoDeDato nombreDeLaVariable
  int numero; // NULL es la ausencia de valor
  // 2 -> 10
  // 8 -> 1000
  // 32 bits de máximo para INT
  double numeroConDecimales;
  // 64 bits -> el doble de un INT
  bool condicion;
  // true - false
  char letra;
  // 'F' -> entre comillas simples
  float numeroConMenosDecimales;
  // 32 bits para guardar numeros con decimales
  
  // Asignacion de variables
  // le doy un valor al espacio de la memoria
  // nombreDeVariable = Valor;
  numero = 32;
  numeroConDecimales = 3.126381627836;
  condicion = true;
  numeroConMenosDecimales = 3.126381627836;
  
  // Declaracion con asignación
  // TDD nombre = valor;
  int otroNumero = 10;
  
  // Estructuras de control (condicionales)
  
  // if
  // if(condicion) -> se evalua a verdadero
  // si la condicion es verdadera, entra dentro de la estructura
  
  if (true) {
    // entra
  }
  
  if (false) {
    //no entra
  }
  
  if (8 == 3) {
    // no entra
  }
  
  if (3 < 10) {
    // si entra
  }
  
  // if - else
  // if(condicion) -> se evalua a verdadero
  // si no es verdadero entra al bloque else
  // no puede entrar en ambos bloques a la vez
  
  if (true) {
    // si entra
  } else {
    // no entra
  }
  
  if (false) {
    // no entra
  } else {
    // si entra
  }
  
  if (8 == 8) {
    // si entra
  } else {
    // no entra
  }
  
  if (3 > 10) {
    // no entra
  } else {
    // si entra
  }
  
  // if - else if - ... - else
  // concatenacion de muchos ifs
  // no se puede entrar en multiples bloques a la vez
  // siempre ingresa en el primero q es verdadero desde arriba y luego sale
  
  int a = 3;
  
  if (a == 10) {
    // no entra
  } else if (a < 2) {
    // no entra
  } else if (a > 0){
    // si entra
  } else if (a > 1){
    // no entra
  } else {
    // no entra
  }
  
  // switch
  switch (a) {
    case a == 10:
      // no entra
      break;
    case a < 2:
      // no entra
      break;
    case a > 0:
      // si entra
      break;
    case a > 1:
      // no entra
      break;
    default:
      break;
  }
  
  switch (a) {
    case 10:
      // es 10
      break;
    case 3:
      // es 3
      break;
    default:
      // no es 10 ni 3
      break;
  }
  
  // BUCLES
  // los bucles los utilizamos para repetir las mismas sentencias un numero determinado de veces
  
  // Bucle for
  // Lo utilizo cuando conozco puntualmente cuantas veces quiero ejecutar antes de ejecutar
  // for(a;b;c){}
  // a -> bloque de inicializacion (int contador = 0)
  // b -> bloque de evaluacion, condicion que si sigue siendo verdadera, el bucle se sigue ejecutando (contador < n)
  // c -> bloque de actualización (contador += 1)
  
  for (int contador = 1; contador <= 20; contador += 1) {
    cout << "Hola mundo";
  }
  
  
  
  
  
  
  return 0;
}
