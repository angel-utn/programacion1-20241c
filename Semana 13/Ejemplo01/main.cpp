/**
21
Hacer un programa para ingresar las encuestas de edad efectuadas a 200 personas y
luego listar la cantidad de personas en cada rango de edad seg�n la siguiente tabla.

D�cada 0.	(Edad 1-9)	   Cantidad de encuestados: 99
D�cada 1.	(Edad 10-19)	Cantidad de encuestados: 99
�����������
D�cada 9.	(Edad 90-99)	Cantidad de encuestados: 99
*/

#include <iostream>
using namespace std;
#include "funciones.h"

int main()
{
   const int ENCUESTAS = 200;
   int vecDecadas[10] = {};
   cargarEncuestas(vecDecadas, ENCUESTAS);
   cout << endl << endl;
   mostrarResultadosEncuestas(vecDecadas);
   return 0;
}
