/**
  TP3 EJ10
  Hacer un programa para ingresar una lista de 10 n�meros, luego informar el
 m�ximo yla posici�n del m�ximo en la lista. En caso de �empates� considerar la
 primera aparici�n.
 Ejemplo A: 5,-10, 20, 8, 25, 13, 35,-8,-5, 20. Listar� M�ximo 35 Posici�n 7.
 Ejemplo B: 5,-10, 2, 8, 25, 13, 55,-8, 55, 9. Listar� M�ximo 55 Posici�n 7.
 Ejemplo C:-15,-10,-20,-8,-25,-13,-55,-6,-55,-20. Listar� M�ximo -6 Posici�n 8.
 El tercer ejemplo demuestra que NO SIEMPRE en una lista de n�meros el
 m�ximo es un positivo.

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
