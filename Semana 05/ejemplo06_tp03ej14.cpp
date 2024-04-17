/**
   TP03Ej14
   Dada una lista de 7 números informar cual es el primer, el segundo, el
 anteúltimo y el último número impar ingresado.

 Ejemplo 8, 4,-5, 7, 9, 18, 5 se informa: Primer impar:-5, Segundo impar: 7,
 Anteúltimo impar: 9 y Último impar: 5.
*/
#include <iostream>
using namespace std;

int main(){
  int i, nro, contImpares=0, primerImpar=0, segundoImpar=0, ultimoImpar = 0, anteUltimoImpar = 0;

  for(i=1; i<=7; i++){

      cout << "Numero: ";
      cin >> nro;

      if (nro % 2 != 0){

         contImpares++;

         if (contImpares == 1){
            primerImpar = nro;
         }
         else if(contImpares == 2){
            segundoImpar = nro;
         }

         anteUltimoImpar = ultimoImpar;
         ultimoImpar = nro;
      }
  }
  cout << endl;
  if (contImpares > 0){
   cout << "Primer  impar: " << primerImpar << endl;
   cout << "Ultimo impar : " << ultimoImpar << endl;
  }
  if (contImpares > 1){
   cout << "Segundo impar: " << segundoImpar << endl;
   cout << "Anteultimo impar : " << anteUltimoImpar << endl;
  }


  return 0;
}
