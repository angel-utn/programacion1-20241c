/* TP 2 EJ 11
Hacer un programa para ingresar cinco n�meros y listar cuantos de esos cinco n�meros son
positivos, cuantos son negativos y cuantos son iguales a 0.
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    int num1, num2, num3;

    // VARIANTE 1: PRIMERO DECLARO, LUEGO INICIALIZO
    int contCeros, contPos, contNeg;

    contCeros = 0;
    contPos = 0;
    contNeg = 0;

    /* VARIANTE 2: PRIMERO DECLARO, LUEGO INICIALIZO TODAS EN UNA L�NEA
    int contCeros, contPos, contNeg;
    contCeros = contPos = contNeg = 0;
    */

    /* VARIANTE 3: DECLARO E INICIALIZO UNA VARIABLE POR L�NEA
    int contCeros = 0;
    int contPos = 0;
    int contNeg = 0;
    */

    /* VARIANTE 4: DECLARO E INICIALIZO TODAS EN UNA L�NEA
    int contCeros = 0, contPos = 0, contNeg = 0;
    */

    //int contCeros, contPos, contNeg = 0;     mal (s�lo inicializo contNeg)
    //int contCeros = contPos = contNeg = 0;   mal (no compila)

    cout << "Ingresar n�mero 1: ";
    cin >> num1;

    if(num1 > 0)
    {
        contPos++;
        //contPos = contPos + 1;  variante v�lida para incrementar en 1 el contador
        //contPos += 1; variante v�lida para incrementar en 1 el contador
    }
    else
    {
        if(num1 < 0)
        {
            contNeg++;
        }
        else
        {
            contCeros++;
        }
    }

    cout << "Ingresar n�mero 2: ";
    cin >> num2;

    if(num2 > 0)
    {
        contPos++;
    }
    else
    {
        if(num2 < 0)
        {
            contNeg++;
        }
        else
        {
            contCeros++;
        }
    }

    cout << "Ingresar n�mero 3: ";
    cin >> num3;

    if(num3 > 0)
    {
        contPos++;
    }
    else
    {
        if(num3 < 0)
        {
            contNeg++;
        }
        else
        {
            contCeros++;
        }
    }

    cout << "Cantidad de positivos: " << contPos << endl;
    cout << "Cantidad de negativos: " << contNeg << endl;
    cout << "Cantidad de ceros: " << contCeros << endl;

    return 0;
}
