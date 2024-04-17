/**
 TP03EJ15
 Hacer un programa para ingresar una lista de 8 números y luego informar si
 todos están ordenados en forma creciente. En caso de haber dos números
 “empatados” considerarlos como crecientes.
 Por ejemplo si la lista fuera:
 Ejemplo A:-10, 1, 5, 7, 15, 18, 20, 23 se emitirá un cartel: “Conjunto Ordenado”
 Ejemplo B: 10, 10, 15, 20, 25, 25, 28, 33 se emitirá un cartel: “Conjunto Ordenado”
 Ejemplo C: 10, 1, 15, 7,-15, 18, 20, 23 se emitirá un cartel: “Conjunto No
 Ordenado”
*/
#include <iostream>
using namespace std;

int main(){
   int i, actual, anterior;
   bool estaOrdenado = true;

   for(i=1; i<=8; i++){
      cout << "Numero: ";
      cin >> actual;

      if (i == 1){
         anterior = actual;
      }
      else{
         if (actual < anterior){
           estaOrdenado = false;
         }
      }
      anterior = actual;
   }

   if (estaOrdenado == true)
   {
      cout << "Conjunto ordenado";
   }
   else{
      cout << "Conjunto no ordenado";
   }

  return 0;
}
