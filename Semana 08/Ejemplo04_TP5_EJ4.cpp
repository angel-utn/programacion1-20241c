/* TP5-EJ4
Dada una lista de números compuesta por 10 grupos y cada grupo separado del siguiente por un cero, se pide determinar e informar:

a) Para cada uno de los grupos el máximo de los números pares y el máximo de los números impares. Se informan 2 resultados por cada grupo.
b) Para cada uno de los grupos el porcentaje de números negativos y números positivos. Se informan 2 resultados por cada grupo.
c) Cuántos números positivos había en total entre los 10 grupos. Se informa 1 resultado al final.
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    const int GRUPOS = 3;
    int i, num, maxPar, maxImpar, contPares, contImpares;
    int contPos, contNeg, contNum, contPosTotal = 0;
    float porcPos, porcNeg;

    for(i=1; i<=GRUPOS; i++)
    {
        cout << endl;
        cout << "BIENVENID@ AL GRUPO #" << i << endl;
        cout << "Ingrese un número: ";
        cin >> num;

        contPares = 0;
        contImpares = 0;
        contPos = 0;
        contNeg = 0;
        contNum = 0;

        while(num != 0)
        {
            //A
            if(num % 2 == 0)  //par
            {
                if(contPares == 0)
                {
                    maxPar = num;
                }
                else
                {
                    if(num > maxPar)
                    {
                        maxPar = num;
                    }
                }
                contPares++;
            }
            else // impares
            {
                if(contImpares == 0)
                {
                    maxImpar = num;
                }
                else
                {
                    if(num > maxImpar)
                    {
                        maxImpar = num;
                    }
                }
                contImpares++;
            }

            //B
            if(num > 0)  //positivos
            {
                contPos++;
                contPosTotal++; //C
            }
            else
            {
                contNeg++;
            }

            cout << "Ingrese un número: ";
            cin >> num;
        }
        // contPosTotal += contPos;  alternativa

        cout << endl << "GRUPO #" << i << endl;
        //A
        if(contPares > 0)
        {
            cout << "El máximo de los pares es: " << maxPar << endl;
        }
        else
        {
            cout << "No se ingresaron números pares en este grupo" << endl;
        }
        if(contImpares > 0)
        {
            cout << "El máximo de los impares es: " << maxImpar << endl;
        }
        else
        {
            cout << "No se ingresaron números impares en este grupo" << endl;
        }

        //B
        contNum = contPos + contNeg;
        if(contNum > 0)
        {
            porcPos = (float)contPos * 100 / contNum;
            porcNeg = 100 - porcPos;

            cout << "Porcentaje positivos: " << porcPos << "%" << endl;
            cout << "Porcentaje negativos: " << porcNeg << "%" << endl;
        }
        else
        {
            cout << "No se ingresaron números en el grupo" << endl;
        }

    }
    //C
    if(contPosTotal > 0)
    {
        cout << "Se ingresaron " << contPosTotal << " números positivos en total" << endl;
    }
    else
    {
        cout << "No se ingresaron números positivos en ningún grupo" << endl;
    }


    return 0;
}
