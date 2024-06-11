#include "juego.h"

void obtenerNaipe(int codigo, int &numero, string &nombre){

   if (codigo <= 0){
      numero = 0;
      nombre = "Error";
   }
   else if (codigo < 11){
      nombre = "Espada";
   }
   else if (codigo < 21){
      nombre = "Basto";
      codigo = codigo - 10;
   }
   else if (codigo < 31){
      nombre = "Copa";
      codigo = codigo - 20;
   }
   else{
      nombre = "Oro";
      codigo = codigo - 30;
   }

   if (codigo < 8){
      numero = codigo;
   }
   else{
      numero = codigo + 2;
   }

}
