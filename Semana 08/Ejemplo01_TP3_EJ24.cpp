/*
TP3 Ej24
Hacer un programa que permita ingresar el sueldo de 10 empleados y determine:
A-El sueldo máximo.
B-El sueldo mínimo.
C-El sueldo promedio.
D-Cantidad de sueldos mayores a $50000.
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    float sueldo;
    int i;
    float max, min;
    bool banderaMin = false;
    //bool banderaMin = true;
    const int SUELDOS = 10;
    float acum = 0;
    float promedio;
    int cont = 0;

    for(i=1; i<=SUELDOS; i++)
    {
        cout << "Ingrese sueldo empleado #" << i << ": ";
        cin >> sueldo;

        ///calculos

        //A
        if(i == 1)
        {
            max = sueldo;
        }
        else
        {
            if(sueldo > max)
            {
                max = sueldo;
            }
        }

        /* ALTERNATIVA
        if((i==1) || (sueldo > max)){
          max = sueldo;
        }
        */

        //B
        if(!(banderaMin))
        {
            min = sueldo;
            banderaMin = true;
        }
        else
        {
            if(sueldo < min)
            {
                min = sueldo;
            }
        }

        //C
        acum += sueldo;

        //D
        if(sueldo > 50000)
        {
            cont++;
        }
    }

    //CALCULO C
    promedio = acum/SUELDOS;

    //SALIDA POR PANTALLA
    //A
    cout << endl << "Sueldo máximo: $" << max << endl;
    //B
    cout << endl << "Sueldo mínimo: $" << min << endl;
    //C
    cout << endl << "Sueldo promedio: $" << promedio << endl;
    //D
    cout << endl << "Sueldos mayores a $50000: " << cont << endl;


    return 0;
}
