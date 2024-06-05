#include <iostream>
#include <locale>
#include "funciones.h"

using namespace std;

int tirarDado()
{
    int dado;
    dado = (rand() % 6) + 1;
    return dado;
}

void tirarDados(int vec[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        vec[i] = tirarDado();
    }
}

void mostrarVector(int vec[], int tamanio)
{
    int i;
    for(i=0; i<tamanio; i++)
    {
        cout << vec[i] << "\t";
    }
    cout << endl;
}

int contarRepeticiones(int vec[], int tamanio, int numero)
{
    int i, cont = 0;
    for(i=0; i<tamanio; i++)
    {
        if(vec[i] == numero)
        {
            cont ++;
        }
    }
    return cont;
}

bool sonTodosIguales(int vec[], int tamanio)
{
    int cantRepeticiones;
    cantRepeticiones = contarRepeticiones(vec, tamanio, vec[0]);
    if(cantRepeticiones == tamanio)
    {
        return true;
    }
    return false;

}
