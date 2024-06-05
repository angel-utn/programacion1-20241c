/*
16
Dada una lista de 10 números, cargarlos en un vector.
Luego detectar si en el vector hay algún elemento repetido y, en caso de haberlo,
indicarlo con un cartel “Hay Repetidos”.
*/

#include <iostream>
#include <locale>

using namespace std;

void cargarVector(int vec[], int tamanio);
bool hayRepetidosEnVector(int vec[], int tamanio);
int contarRepeticiones(int vec[], int tamanio, int numero);

int main()
{
    setlocale(LC_ALL, "Spanish");

    const int TAM = 10;
    int vec[TAM];
    bool hayRepes;

    cargarVector(vec, TAM);
    //llamado
    hayRepes = hayRepetidosEnVector(vec, TAM);

    if(hayRepes)
    {
        cout << "Hay repetidos" << endl << endl;
    }

    /*
    if(hayRepetidosEnVector(vec, TAM) == true){
        cout << "Hay repetidos" << endl << endl;
    }

    if(hayRepetidosEnVector(vec, TAM)){
      //...
    }
    */
    return 0;
}

void cargarVector(int vec[], int tamanio)
{
    int i, n;
    for(i=0; i<tamanio; i++)
    {
        cout << "Ingrese número " << i + 1 << ": ";
        //cin >> vec[i];
        cin >> n;
        vec[i] = n;
    }
}

bool hayRepetidosEnVector(int vec[], int tamanio)
{
    int i;
    //bool hayRepetidos = false;
    for(i=0; i<tamanio; i++)
    {
        if(contarRepeticiones(vec, tamanio, vec[i]) > 1)
        {
            //hayRepetidos = true;
            return true;
        }
    }
    return false;
    //return hayRepetidos;
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

