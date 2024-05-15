/*TP4 Ej26
Un n�mero Simon�rico es un n�mero positivo divisible por 15 y a la vez divisible por 3 pero no divisible por 6. Hacer un programa que muestre los primeros 1000 n�meros Simon�ricos. El usuario no debe ingresar nada.
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    int cantSimon = 0;
    int num = 1;

    do
    {
        if((num % 15 == 0) && (num % 3 == 0) && (num % 6 != 0))
        {
            cantSimon++;
            cout << endl << num << endl;
        }
        num++;
    }
    while(cantSimon < 1000);

    /*
    system("cls");
    system("pause");

    cout << "La variable cantSimon tiene: " << cantSimon << endl;
    cout << "La variable num tiene: " << num << endl;
    */

    return 0;
}
