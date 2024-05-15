/**
Ej24 Tp05
----------
Una expendedora de combustibles con varias sucursales tiene un lote de registros con las
ventas del mes de enero, cada registro tiene los siguientes datos:
- Nro. de Sucursal (del 1 al 15).
- Día de la venta.
- Tipo de día ("H" = hábil, "F" = fin de semana).
- Tipo de Combustible (1 = Premium, 2 = Súper, 3 = Gasoil).
- Monto de la venta.

Los registros se encuentran agrupados por Sucursal y el fin del lote se indica con Sucursal 0.

Se pide determinar e informar:
A - El promedio de recaudación para cada uno de los tres tipos de combustible en cada sucursal.
B - La recaudación total acumulada discriminada para la primera y la última semana del mes.
C - La sucursal con mayor recaudación en los días hábiles.

D - La recaudación máxima en fines de semana por cada tipo de combustible y en qué sucursal fue cada uno.
*/
#include <iostream>
using namespace std;

int main(){
   int sucursal, dia, tipoCombustible, sucursalActual;
   float monto;
   char tipoDia;

   /// A
   int cantVentasPremium, cantVentasSuper, cantVentasGasoil;
   float totalPremium, totalSuper, totalGasoil;

   /// B
   float recaudacionPrimeraSemana = 0, recaudacionUltimaSemana = 0;

   /// C
   float recaudacionDiaHabilSucusal, maxRecaudacionDiaHabil = 0;
   int sucursalMaxRecaudacionDiaHabil;

   ///D
   float totalSuperFDS, totalPremiumFDS, totalGasoilFDS;
   float maxTotalSuperFDS=0, maxTotalPremiumFDS=0, maxTotalGasoilFDS=0;
   int maxSucursalSuperFDS, maxSucursalPremiumFDS, maxSucursalGasoilFDS;


   cout << "Sucursal: ";
   cin >> sucursal;

   while (sucursal != 0){
      sucursalActual = sucursal;

      /// A
      totalGasoil = totalPremium = totalSuper = 0;
      cantVentasGasoil =cantVentasPremium = cantVentasSuper = 0;

      ///D
      totalGasoilFDS = totalPremiumFDS = totalSuperFDS = 0;

      /// C
      recaudacionDiaHabilSucusal = 0;

      while(sucursalActual == sucursal){
         cout << "Dia: ";
         cin >> dia;
         cout << "Tipo de dia: ";
         cin >> tipoDia;
         cout << "Tipo de combustible: ";
         cin >> tipoCombustible;
         cout << "Monto: $";
         cin >> monto;
         cout << "----------------------------" << endl;

         /// A
         switch(tipoCombustible){
            case 1:
               cantVentasPremium++;
               totalPremium += monto;
            break;
            case 2:
               cantVentasSuper++;
               totalSuper += monto;
            break;
            case 3:
               cantVentasGasoil++;
               totalGasoil += monto;
            break;
         }

         // B
         if (dia <= 7){
            recaudacionPrimeraSemana += monto;
         }
         else if(dia >= 25){
            recaudacionUltimaSemana += monto;
         }

         // C
         if (tipoDia == 'H'){
            recaudacionDiaHabilSucusal += monto;
         }

         /// D
         if (tipoDia == 'F'){
             switch(tipoCombustible){
               case 1:
                  totalPremiumFDS += monto;
               break;
               case 2:
                  totalSuperFDS += monto;
               break;
               case 3:
                  totalGasoilFDS += monto;
               break;
            }
         }

         cout << "Sucursal: ";
         cin >> sucursal;
      }

      cout << endl << "PUNTO A" << endl << "------------------" << endl;
      cout << "SUCURSAL: " << sucursalActual << endl;
      if (cantVentasPremium > 0){
         cout << "PREMIUM: $ " << totalPremium/cantVentasPremium << endl;
      }
      if (cantVentasSuper > 0){
         cout << "SUPER: $ " << totalSuper/cantVentasSuper << endl;
      }
      if (cantVentasGasoil > 0){
         cout << "GASOIL: $ " << totalGasoil/cantVentasGasoil << endl;
      }
      cout << endl;

      /// C
      if (recaudacionDiaHabilSucusal > maxRecaudacionDiaHabil){
         maxRecaudacionDiaHabil = recaudacionDiaHabilSucusal;
         sucursalMaxRecaudacionDiaHabil = sucursalActual;
      }
      /// D
      if (totalGasoilFDS > maxTotalGasoilFDS){
         maxTotalGasoilFDS = totalGasoilFDS;
         maxSucursalGasoilFDS = sucursalActual;
      }
      if (totalSuperFDS > maxTotalSuperFDS){
         maxTotalSuperFDS = totalSuperFDS;
         maxSucursalSuperFDS = sucursalActual;
      }
      if (totalPremiumFDS > maxTotalPremiumFDS){
         maxTotalPremiumFDS = totalPremiumFDS;
         maxSucursalPremiumFDS = sucursalActual;
      }

   }


   cout << endl << "PUNTO B" << endl << "------------------" << endl;
   cout << "Primera semana: $ " << recaudacionPrimeraSemana << endl;
   cout << "Ultima  semana: $ " << recaudacionUltimaSemana << endl;

   cout << endl << "PUNTO C" << endl << "------------------" << endl;
   cout << "Sucursal: " << sucursalMaxRecaudacionDiaHabil << " (" << maxRecaudacionDiaHabil << ")" << endl;

   cout << endl << "PUNTO D" << endl << "------------------" << endl;
   if (maxTotalPremiumFDS > 0){
      cout << "PREMIUM : " << maxTotalPremiumFDS << endl;
      cout << "SUCURSAL: " << maxSucursalPremiumFDS << endl << endl;
   }

   if (maxTotalSuperFDS > 0){
      cout << "SUPER   : " << maxTotalSuperFDS << endl;
      cout << "SUCURSAL: " << maxSucursalSuperFDS << endl << endl;
   }

   if (maxTotalGasoilFDS > 0){
      cout << "GASOIL  : " << maxTotalGasoilFDS << endl;
      cout << "SUCURSAL: " << maxSucursalGasoilFDS << endl;
   }
  return 0;
}
