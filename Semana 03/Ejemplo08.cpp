/*
Hacer un programa que pida 20 números por teclado e informe: cuántos de ellos son positivos,
cuántos son negativos y cuántos son ceros
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    int num;
    int i;
    int contPos = 0, contNeg = 0, contCeros = 0;
    const int REP = 20;

    /* VARIANTE: si quisiera que el usuario ingrese por teclado cuántas repeticiones:
    int repe;
    cout << "Ingresar repeticiones: ";
    cin >> repe;

    for(i=1; i<=repe; i++){...
    */

    // VARIANTE 2: con constante simbólica o literal:
    for(i=1; i<=REP; i++)   // for(i=1; i<=20; i++)
    {
        //cout << "El valor de i es: " << i << endl << endl;
        cout << "Ingresar número #" << i << ": ";
        cin >> num;

        if(num > 0)
        {
            contPos++;
            //cout << "El número es positivo " << endl;
        }
        else
        {
            if(num < 0)
            {
                contNeg++;
                //cout << "El número es negativo " << endl;
            }
            else
            {
                //cout << "El número es cero " << endl;
                contCeros++;
            }
        }
    }

    cout << "Hay " << contPos << " números positivos" << endl;
    cout << "Hay " << contNeg << " números negativos" << endl;
    cout << "Hay " << contCeros << " ceros" << endl;

    return 0;
}
