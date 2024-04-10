/*
Hacer un programa que pida 20 n�meros por teclado e informe: cu�ntos de ellos son positivos,
cu�ntos son negativos y cu�ntos son ceros
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

    /* VARIANTE: si quisiera que el usuario ingrese por teclado cu�ntas repeticiones:
    int repe;
    cout << "Ingresar repeticiones: ";
    cin >> repe;

    for(i=1; i<=repe; i++){...
    */

    // VARIANTE 2: con constante simb�lica o literal:
    for(i=1; i<=REP; i++)   // for(i=1; i<=20; i++)
    {
        //cout << "El valor de i es: " << i << endl << endl;
        cout << "Ingresar n�mero #" << i << ": ";
        cin >> num;

        if(num > 0)
        {
            contPos++;
            //cout << "El n�mero es positivo " << endl;
        }
        else
        {
            if(num < 0)
            {
                contNeg++;
                //cout << "El n�mero es negativo " << endl;
            }
            else
            {
                //cout << "El n�mero es cero " << endl;
                contCeros++;
            }
        }
    }

    cout << "Hay " << contPos << " n�meros positivos" << endl;
    cout << "Hay " << contNeg << " n�meros negativos" << endl;
    cout << "Hay " << contCeros << " ceros" << endl;

    return 0;
}
