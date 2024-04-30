/**
TP04Ej22

Hacer un programa que permita ingresar una lista de números positivos, negativos o
cero hasta que se ingrese el 5º número par.

Calcular e informar:
La cantidad de ternas de números negativos ingresados de manera consecutiva.

Ejemplo A: 4, -1, -4, -5, 10, -3, -5, 7, -5, -3, -6, 10 → Cantidad de ternas: 2
Ejemplo B: -2, -4, -5, 6, -8, -5, -6 --> Cantidad de ternas: 2
Ejemplo C: 2, 4, -5, -6, -8, -5, -6 --> Cantidad de ternas: 3 -- VARIANTE!!
*/

#include <iostream>
using namespace std;

int main(){
   int contPares = 0, nro, contNegativos = 0, contTernasNegCons = 0;
   bool continuar = true;


   while (contPares < 5){
      cout << "Ingresar nro: ";
      cin >> nro;

      if (nro % 2 == 0){
         contPares++;
      }

      if (nro < 0){
         contNegativos++;
         if (contNegativos == 3){
            contTernasNegCons++;
            contNegativos = 2;
         }
      }
      else{
         contNegativos = 0;
      }
   }

   cout << "Ternas de nros negativos consecutivos: " << contTernasNegCons << endl;

   return 0;
}



