/**
  Ingresar por teclado 3 nros. Mostrar e informar si hubo al menos un positivo.
*/
#include <iostream>
using namespace std;

int main(){
   int nro, contadorPositivos = 0;
   bool huboNumeroPositivo = false;

   cout << "Ingresar tres numeros: " << endl;
   cin >> nro;

   if (nro > 0){
      huboNumeroPositivo = true;
   }

   cin >> nro;

   if (nro > 0){
      huboNumeroPositivo = true;
   }

   cin >> nro;

   if (nro > 0){
      huboNumeroPositivo = true;
   }

   if (huboNumeroPositivo == true){
      cout << "Hubo al menos un positivo" << endl;
   }


   return 0;
}
