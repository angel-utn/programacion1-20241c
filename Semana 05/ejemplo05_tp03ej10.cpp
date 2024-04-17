/**
  TP3 EJ10
  Hacer un programa para ingresar una lista de 10 números, luego informar el
 máximo yla posición del máximo en la lista. En caso de “empates” considerar la
 primera aparición.
 Ejemplo A: 5,-10, 20, 8, 25, 13, 35,-8,-5, 20. Listará Máximo 35 Posición 7.
 Ejemplo B: 5,-10, 2, 8, 25, 13, 55,-8, 55, 9. Listará Máximo 55 Posición 7.
 Ejemplo C:-15,-10,-20,-8,-25,-13,-55,-6,-55,-20. Listará Máximo -6 Posición 8.
 El tercer ejemplo demuestra que NO SIEMPRE en una lista de números el
 máximo es un positivo.

*/

#include <iostream>
using namespace std;

int main(){

   int nro, i, posicion=0;
   int maximo, posicionMaximo;

   for(i=1; i<=5; i++){
      cout << "Numero: ";
      cin >> nro;
      posicion++;

      if (posicion==1 || nro > maximo){
         maximo = nro;
         posicionMaximo = posicion;
      }
   }

   cout << endl << "El numero mas grande es: " << maximo << endl;
   cout << "Posicion del maximo: " << posicionMaximo << endl;


  return 0;
}
