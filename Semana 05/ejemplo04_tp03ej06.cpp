/**
  TP3 EJ6 Hacerun programa para ingresar un N valor que indica la cantidad de números
 que componen una lista y luego solicitar se ingresen esos N números. Se pide
 informar cuantos son positivos
 Ejemplo A: Se ingresa como N el valor 5, y luego se ingresa: 10,-3, 2, 5, 4. Se
 listará: Cantidad de Positivos: 4
 Ejemplo B: Se ingresa como N el valor 6, y luego se ingresa:-10,-3,-2, 0,-5,-4.
 Se listará: Cantidad de Positivos: 0
*/

#include <iostream>
using namespace std;

int main(){

   int cantPositivos, nro, cantidadIteraciones, i;

   cout << "Ingresar la cantidad de nros de la lista: ";
   cin >> cantidadIteraciones;
   cantPositivos = 0;

   for(i=1; i<=cantidadIteraciones; i++){

      cout << "Numero: ";
      cin >> nro;

      if (nro > 0){
         cantPositivos++;
      }

   }

   cout << endl << "Cantidad de positivos: " << cantPositivos << endl;

  return 0;
}
