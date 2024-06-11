#include "funciones.h"

#include <iostream>
using namespace std;

void cargarEncuestas(int vecDecadas[], int cantEncuestas)
{
   cout << "Cargar las edades de las " << cantEncuestas << " persona/s: " << endl;
   int i, edad, decada;

   for(i=1; i<= cantEncuestas; i++){
      cin >> edad;
      decada = edad / 10;
      vecDecadas[decada]++;
   }
}

void mostrarResultadosEncuestas(int vecDecadas[])
{
   int i;
   cout << "Decada\t\tCant. Encuestados" << endl;
   cout << "---------------------------------------------" << endl;
   for(i=0; i<10; i++){
      cout << i << "\t\t" << vecDecadas[i] << endl;
   cout << "---------------------------------------------" << endl;
   }
}
