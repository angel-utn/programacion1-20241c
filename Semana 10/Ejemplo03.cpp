#include <iostream>
using namespace std;

bool esPrimo(int numero);
int contarDivisores(int numero);

int main()
{
    int numero;
    bool resultado;

    cout << "Ingresar un numero para saber si es primo: ";
    cin >> numero;

    resultado = esPrimo(numero);

    if (resultado == true)
    {
        cout << "Es primo";
    }
    else
    {
        cout << "No es primo";
    }

    cout << " porque tiene " << contarDivisores(numero) << " divisores";

    return 0;
}

int contarDivisores(int numero)
{

    int i, contadorDivisores = 0;

    for(i=1; i<=numero; i++)
    {
        if (numero%i == 0)
        {
            contadorDivisores++;
        }
    }

    return contadorDivisores;

}

bool esPrimo(int numero)
{
    if (numero <= 1)
    {
        return false;
    }

    int contadorDivisores = contarDivisores(numero);

    if (contadorDivisores == 2)
    {
        return true;
    }
    else
    {
        return false;
    }

}
