/**
Ej9 TP5

Hacer un programa para ingresar los valores de los pesos de distintas encomiendas
que se deben enviar a distintos clientes y que finaliza cuando se ingresa un peso negativo.
Se deben agrupar las encomiendas en camiones que pueden transportar hasta 200 kilos en total.

Ejemplo: 10, 20, 140,   70, 100,   40, 10, 50, 80,   90, 30, 40,   50, -10
Camión:    1               2              3              4            5

Se pide determinar e informar:
a) El número de cada camión y peso total de encomiendas.
Camión 1: 170 kg, Camión 2: 170 kg, Camión 3: 180kg etc.

b) El número de camión que transporta mayor cantidad de encomiendas.
En el ejemplo anterior sería el Camión 3 con 4 encomiendas.

*/
#include <iostream>
using namespace std;

int main(){
  float kilos, sumaKilosCamion=0;
  int camionActual = 1, encomiendasCamion = 0, maxCamion, maxCantidadEncomiendasCamion = 0;

  cout << "Kilos: ";
  cin >> kilos;

  while(kilos > 0){

     while (sumaKilosCamion+kilos <= 200 && kilos > 0){
        sumaKilosCamion += kilos;
        encomiendasCamion++;

        cout << "Kilos: ";
        cin >> kilos;
     }

     cout << "A) Camion: " << camionActual << endl;
     cout << "Kilos transportados: " << sumaKilosCamion << " kgs" << endl;

     /// B
     if (encomiendasCamion > maxCantidadEncomiendasCamion){
         maxCantidadEncomiendasCamion = encomiendasCamion;
         maxCamion = camionActual;
     }

     camionActual++;
     sumaKilosCamion = 0;
     encomiendasCamion = 0;
  }

  cout << "B) Camion que transporto mas encomiendas: " << maxCamion << endl;

  return 0;
}
