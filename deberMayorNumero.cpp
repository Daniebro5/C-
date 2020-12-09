//
//  deberMayorNumero.cpp
//  C++
//
//  Created by Danni Brito on 12/8/20.
//

#include <iostream>

using namespace std;

int main(){
  
  int indice;
  int tamanio;
  int maximo1;
  int maximo2;
  
  cout << "Ingrese el tamanio de los vectores: " << endl;
  cin >> tamanio;
  float vector1[ tamanio ];
  float vector2[ tamanio ];
  
  for (indice = 0; indice < tamanio; indice += 1){
    cout << "Ingrese el elemento " << indice + 1 << " del primer vector";
    cin >> vector1[indice];
    cout << "Ingrese el elemento " << indice + 1 << " del segundo vector";
    cin >> vector2[indice];
  }
  
  maximo1 = vector1[0];
  for (indice = 1; indice < n; indice += 1){
    if(vector1[indice] > maximo1){
      maximo1 = vector1[indice];
    }
  }
  
  maximo2 = vector2[0];
  for (indice = 1; indice < n; indice += 1){
    if(vector2[indice] > maximo2){
      maximo2 = vector2[indice];
    }
  }
  
  cout<< "El maximo valor es: " << endl;
  if(maximo1 > maximo2){
    cout << maximo1;
  }else{
    cout << maximo2;
  }
  
  return 0;
}

