/* TP 2 EJ 1
Hacer un programa para ingresar por teclado un n�mero y luego emitir por pantalla un cartel
aclaratorio indicando si el mismo es positivo, negativo o cero.
Importante: Verifique que el programa emita UN SOLO CARTEL.
Variante: emitir un cartel adicional en caso de que el n�mero sea distinto de cero
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    int numero;

    cout << "Ingrese un n�mero: ";
    cin >> numero;

    //VARIANTE 1: CON ANIDAMIENTO
    if(numero == 0)
    {
        cout << "El n�mero ingresado es 0" << endl;
    }
    else
    {
        cout << "El n�mero ingresado es distinto de cero" << endl;
        if(numero < 0)
        {
            cout << "El n�mero ingresado es negativo" << endl;
        }
        else
        {
            cout << "El n�mero ingresado es positivo" << endl;
        }
    }

    /* VARIANTE 2: CON ELSE IF (REPITO C�DIGO)
    if(numero == 0)
    {
        cout << "El n�mero ingresado es 0" << endl;
    }
    else if(numero < 0)
        {
            cout << "El n�mero ingresado es negativo" << endl;
            cout << "El n�mero ingresado es distinto de cero" << endl;
        }
    else
        {
            cout << "El n�mero ingresado es positivo" << endl;
            cout << "El n�mero ingresado es distinto de cero" << endl;
        }
    */

    /* VARIANTE 3: IF INDEPENDIENTES, SIN ELSE
    if(numero == 0){
      //cero
    }
    if(numero < 0){
      //negativo
    }
    if(numero > 0){
      //positivo
    }
    */

    return 0;
}
