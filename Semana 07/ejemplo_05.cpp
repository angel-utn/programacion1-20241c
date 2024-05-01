/**
  TP4 EJ25

El festival Larapalooza, el mejor festival musical del mundo, brindará una serie de
conciertos distribuidos en tres jornadas distintas. Se desea un programa que registre los
artistas que participarán.

Por cada artista se registró:
- Número de artista (entero)
- Integrantes (entero)
- Jornada (1, 2 o 3)
- Duración del show en minutos (entero)

La información no se encuentra ordenada bajo ningún criterio.
La carga de datos se finaliza con un número de artista igual a cero. Calcular e informar:

A) El número de artista que realice el show más largo de la jornada 1.

B) La cantidad de solistas (artistas de 1 integrante) que participaron en cada
una de las jornadas. (se muestran tres resultados).

C) La jornada más extensa (en minutos totales).

D) Duración promedio de show por artista (se muestra un resultado).
*/
#include <iostream>
using namespace std;

int main(){

   int artista, minutos, integrantes, jornada;

   /// A
   int maxArtistaJornada1, maxMinutosJornada1 = -1;

   /// B
   int solistasJ1 = 0, solistasJ2 = 0, solistasJ3 = 0;

   /// C
   int minutosJ1 = 0, minutosJ2 = 0, minutosJ3 = 0, jornadaMasExtensa;

   /// D
   int sumaMinutos = 0, cantArtistas = 0;
   float promedioMinutos;

   cout << "Artista: ";
   cin >> artista;

   while (artista != 0){

      cout << "Integrantes: ";
      cin >> integrantes;

      cout << "Jornada (1, 2, 3): ";
      cin >> jornada;

      cout << "Minutos: ";
      cin >> minutos;

      /// A
      if (jornada == 1 && minutos > maxMinutosJornada1){
         maxMinutosJornada1 = minutos;
         maxArtistaJornada1 = artista;
      }

      /// B
      if (integrantes == 1){
         if (jornada == 1){
            solistasJ1++;
         }
         else if (jornada == 2){
            solistasJ2++;
         }
         else if (jornada == 3){
            solistasJ3++;
         }
      }

      /// C
      switch(jornada){
      case 1:
         minutosJ1 += minutos;
         break;
      case 2:
         minutosJ2 += minutos;
         break;
      case 3:
         minutosJ3 += minutos;
         break;
      }

      /// D
      sumaMinutos += minutos;
      cantArtistas++;

      cout << "-----------------------" << endl;

      cout << "Artista: ";
      cin >> artista;
   }

   cout << endl << "PUNTO A" << endl << "---------------------" << endl;
   cout << maxArtistaJornada1 << endl;

   cout << endl << "PUNTO B" << endl << "---------------------" << endl;
   cout << "Jornada 1: " << solistasJ1 << endl;
   cout << "Jornada 2: " << solistasJ2 << endl;
   cout << "Jornada 3: " << solistasJ3 << endl;

   cout << endl << "PUNTO C" << endl << "---------------------" << endl;
   if (minutosJ1 > minutosJ2 && minutosJ1 > minutosJ3){
      jornadaMasExtensa = 1;
   }
   else if (minutosJ2 > minutosJ3){
      jornadaMasExtensa = 2;
   }
   else{
      jornadaMasExtensa = 3;
   }

   cout << "Jornada mas extensa: " << jornadaMasExtensa << endl;

   cout << endl << "PUNTO D" << endl << "---------------------" << endl;
   if (cantArtistas > 0){
      promedioMinutos = (float) sumaMinutos / cantArtistas;
      cout << "Promedio minutos por artista: " << promedioMinutos;
   }
  return 0;
}
