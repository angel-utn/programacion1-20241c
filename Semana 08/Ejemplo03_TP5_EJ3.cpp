/*
TP5 Ej3
Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero y luego informar el porcentaje de números primos y el porcentaje de números no primos. Se informan 2 resultados al final.
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    int num;
    int cantPrimos = 0, cantNoPrimos = 0;
    float porcPrimos, porcNoPrimos;
    int i, cantDiv;
    int cantNumeros;

    cout << "Ingrese un número: ";
    cin >> num;

    while(num != 0)
    {

        //EVALÚO SI ES O NO PRIMO

        if(num > 1)
        {
            cantDiv = 0;
            for(i=1; i<=num; i++)
            {
                if(num % i == 0)
                {
                    cantDiv++;
                }
            }
            if(cantDiv == 2)
            {
                cantPrimos++;
            }
            else
            {
                cantNoPrimos++;
            }
        }
        else
        {
            cantNoPrimos++;
        }

        cout << "Ingrese un número: ";
        cin >> num;
    }
    //CÁLCULO DE PORCENTAJES
    cantNumeros = cantPrimos + cantNoPrimos;
    if(cantNumeros < 1)
    {
        cout << "No se han ingresado números" << endl;
    }
    else
    {
        porcPrimos = (float)cantPrimos * 100 / cantNumeros;
        porcNoPrimos = 100 - porcPrimos;

        //SALIDA POR PANTALLA
        cout << endl << "Porcentaje de primos: " << porcPrimos << endl;
        cout << endl << "Porcentaje de no-primos: " << porcNoPrimos << endl;
    }

    return 0;
}
