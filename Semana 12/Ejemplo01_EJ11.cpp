/*
11
Dada una lista de 10 números, cargarlos en un vector.
Luego ingresar un número e informar el primer índice donde ese número aparece en el vector.
En caso de no aparecer se mostrará el valor índice igual a -1.
*/

#include <iostream>
#include <locale>

using namespace std;

void cargarVector(int vec[], int tamanio);
void mostrarVector(int vec[], int tamanio);
int buscarEnVector(int vec[], int tamanio, int numero);
void mostrarMensajes();

int main()
{
    setlocale(LC_ALL, "Spanish");

    const int TAM = 10;

    int vec[TAM] = {};
    int num, posicion;

    cargarVector(vec, TAM);
    //mostrarVector(vec, TAM);

    cout << "Ingrese número a buscar en el vector: ";
    cin >> num;

    posicion = buscarEnVector(vec, TAM, num);

    cout << "El valor " << num << " se ha buscado con resultado: " << posicion << endl << endl;

    //mostrarMensajes();

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

void mostrarVector(int vec[], int tamanio)
{
    int i;
    for(i=0; i<tamanio; i++)
    {
        cout << vec[i] << "\t";
    }
    cout << endl;
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

void mostrarMensajes()
{
    int n1;
    cout << "Ingrese un número y trataré de adivinarlo: ";
    cin >> n1;

    if(n1 == 8)
    {
        cout << "ADIVINÉ! El número es 8" << endl;
        return;
    }

    cout << "Ingresaste un número equivocado" << endl;
}

