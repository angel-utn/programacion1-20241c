/*
Hacer un programa que realice 100 tiradas de 3 dados de 6 caras.
El programa debe calcular y mostrar la cantidad de veces que una tirada produjo que todos los
dados sean iguales.
*/
#include <iostream>
#include "funciones.h"
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    const int CANT_TIRADAS = 100;
    const int CANT_DADOS = 3;
    int vDados[CANT_DADOS];
    int i, contTiradasDadosIguales = 0;
    bool iguales;

    //semilla o seed
    srand(time(0));

    for(i=0; i<CANT_TIRADAS; i++)
    {
        tirarDados(vDados, CANT_DADOS);
        iguales = sonTodosIguales(vDados, CANT_DADOS);
        if(iguales == true)
        {
            mostrarVector(vDados, CANT_DADOS);
            contTiradasDadosIguales++;
        }
    }

    cout << endl << endl;

    cout << "Cantidad de tiradas en que los dados fueron todos iguales: " << contTiradasDadosIguales << endl << endl;

    return 0;
}
