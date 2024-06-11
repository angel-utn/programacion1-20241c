/**
10
Hacer una funci�n que reciba un c�digo de naipe (del 1 al 40) y determine el n�mero y el
palo de la baraja espa�ola de 40 cartas (sin los 8, 9 y comodines del mazo). La funci�n debe
recibir por referencia el n�mero de naipe y el nombre del palo (para ser completados por la funci�n) y
por valor el c�digo de naipe.

Tener en cuenta que:
Los c�digos de naipes de espada van del 1 al 10, basto del 11 al 20, copa del 21 al 30 y oro del 31
al 40. Por ejemplo, naipe con ID #10 es el 12 de espadas.
*/
#include <iostream>
using namespace std;
#include <ctime>
#include "juego.h"

int main()
{
   int numero, i, codigoNaipe, jugador;
   string palo;

   srand(time(0));

   for(jugador=1; jugador<=2; jugador++){
      cout << "Mano del Jugador: " << jugador << endl << endl;
      for(i=1; i<=5; i++){
         codigoNaipe = 1+(rand()%40);
         obtenerNaipe(codigoNaipe, numero, palo);
         cout << "Te toco el " << numero << " de " << palo << endl;
      }

      cout << endl << "-------------------------------------" << endl;
   }


    return 0;
}
