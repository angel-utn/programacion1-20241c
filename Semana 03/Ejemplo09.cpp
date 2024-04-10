#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    int i;

    // EJEMPLO 9A: MUESTRO NÚMEROS DESDE 20 HASTA 1 EN FORMA DECRECIENTE Y SALTANDO DE A DOS
    for(i=20; i>=1; i-=2)
    {
        cout << i << endl;
    }

    // EJEMPLO 9B: MUESTRO LAS LETRAS MAYÚSCULAS DEL ABC
    for(i=65; i<=90; i++)
    {
        cout << char(i) << endl;
    }

    // EJEMPLO 9C: MUESTRO NÚMEROS DESDE 0 HASTA 20 EN FORMA CRECIENTE Y SALTANDO DE A DOS
    for(i=0; i<=20; i+=2)
    {
        cout << i << endl;
    }

    return 0;
}
