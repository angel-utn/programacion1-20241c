/*
  Ej3 TP5
  Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero y
  luego informar el porcentaje de números primos y el porcentaje de números no primos. Se informan 2 resultados al final.

  Realizado por: Gonzalo G
*/

#include <iostream>

using namespace std;

int main ()
{
    int num, ContadorVueltas = 0 ;
    float PorcentajeNoprimos, PorcentajesPrimos  ;
    int ContadorPrimos=0,ContadorNoPrimos = 0, x;

    cout<< "ingrese un numero " ;
    cin>> num;

    while(num != 0)
    {
        ContadorVueltas++;

        int Contador =0;

        for(x=1; x<=num; x++)
        {
            if(num % x == 0 )
            {
                Contador++;
            }
        }

        if(Contador == 2)
        {
            ContadorPrimos++;
        }
        else
        {
            ContadorNoPrimos++;
        }

        cout<< "ingrese un numero " ;
        cin>> num;

    }

    PorcentajesPrimos = (float) ContadorPrimos*100/ContadorVueltas;
    PorcentajeNoprimos = (float) ContadorNoPrimos*100/ContadorVueltas;

    cout<<" el porcentaje de los primos es : " << PorcentajesPrimos<< endl;
    cout<<" el porcentaje de los que NO son primos es : " << PorcentajeNoprimos << endl;




    return 0;
}
