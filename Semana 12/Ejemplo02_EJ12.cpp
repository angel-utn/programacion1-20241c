/*
12
Dada una lista de 10 n�meros, cargarlos en un vector. Luego ingresar un n�mero e informar la
cantidad de veces que ese n�mero aparece en el vector.
*/

#include <iostream>
#include <locale>

using namespace std;

void cargarVector(int vec[], int tamanio);
int buscarEnVector(int vec[], int tamanio, int numero);
int contarRepeticiones(int vec[], int tamanio, int numero);

int main()
{
    setlocale(LC_ALL, "Spanish");

    const int TAM = 10;
    int vec[TAM];
    int num;

    cargarVector(vec, TAM);

    cout << "Ingrese un n�mero: ";
    cin >> num;

    cout << "El n�mero aparece " << contarRepeticiones(vec, TAM, num) << " veces en el vector" << endl << endl;

    return 0;
}

void cargarVector(int vec[], int tamanio)
{
    int i, n;
    for(i=0; i<tamanio; i++)
    {
        cout << "Ingrese n�mero " << i + 1 << ": ";
        //cin >> vec[i];
        cin >> n;
        vec[i] = n;
    }
}

int buscarEnVector(int vec[], int tamanio, int numero)
{
    int i;
    //int pos = -1;
    for(i=0; i<tamanio; i++)
    {
        if(vec[i] == numero)
        {
            //pos = i;
            return i;
        }
    }
    //return pos;
    return -1;
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
