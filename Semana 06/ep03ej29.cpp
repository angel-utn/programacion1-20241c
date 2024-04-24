/**
Se dispone de la información de los últimos 19 partidos del futbolista Diego Armando Laradona.

Por cada partido se registró:
   - Número de partido (1 a 19)
   - Minutos jugados
   - Tarjetas amarillas
   - Tarjetas rojas
   - Goles

Existe un registro para cada partido. Los mismos se encuentran ordenados por número de partido. Se pide calcular e informar:
C) El promedio de tarjetas recibidas por partido.
C2) El promedio de tarjetas recibidas por partido jugado.

E) La mejor racha de partidos convirtiendo goles. Se debe mostrar la mayor cantidad de partidos consecutivos
en los que haya convertido.

NOTA: Un partido jugado tiene una cantidad de minutos jugados > 0.
*/

#include <iostream>
using namespace std;

int main(){
   int numeroPartido, minutosJugados, tarjAmarillas, tarjRojas, goles;
   /// C
   int totalTarjetas = 0, cantPartidosJugados = 0;
   float promedioTarjetas;
   /// E
   int cantPartidosConsecutivosConGoles = 0, rachaMaximaGoleadora = 0;

   for(numeroPartido=1; numeroPartido<=19; numeroPartido++){
      cout << "Numero partido: " << numeroPartido << endl;
      cout << "Minutos jugados: ";
      cin >> minutosJugados;
      cout << "Tarjetas amarillas: ";
      cin >> tarjAmarillas;
      cout << "Tarjetas rojas: ";
      cin >> tarjRojas;
      cout << "Goles: ";
      cin >> goles;

      if (minutosJugados > 0){
         cantPartidosJugados++;
      }
      totalTarjetas += tarjAmarillas + tarjRojas;

      if (goles > 0){
         cantPartidosConsecutivosConGoles++;

         if (cantPartidosConsecutivosConGoles > rachaMaximaGoleadora){
            rachaMaximaGoleadora = cantPartidosConsecutivosConGoles;
         }
      }
      else{
         cantPartidosConsecutivosConGoles = 0;
      }
      cout << "----------------" << endl;

   }

   if (cantPartidosJugados > 0){
      promedioTarjetas = (float) totalTarjetas / cantPartidosJugados;
      cout << "C) Promedio de tarjetas por partido: " << promedioTarjetas << endl;
   }
   cout << "E) Racha maxima goleadora: " << rachaMaximaGoleadora << endl;


  return 0;
}
