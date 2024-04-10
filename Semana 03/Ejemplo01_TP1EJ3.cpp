/* TP 1 - EJ 3
Una concesionaria de autos paga a los vendedores un sueldo fijo de $5000 más $700 de premio
por cada auto vendido. Hacer un programa que permita ingresar por teclado la cantidad de autos
vendidos por un vendedor y luego informar por pantalla el sueldo total a pagar.
Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a pagar es de $7800.
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    int cantAutos;
    int sueldoAPagar;
    const int SUELDO_FIJO = 500000;
    const int PREMIO = 70000;

    cout << "Ingrese cantidad de autos vendidos: " << endl;
    cin >> cantAutos;

    //SUELDO_FIJO = 1000000;  esta línea da error: no se puede reasignar valor a una constante

    //sueldoAPagar = 500000 + (70000 * cantAutos);  con constantes literales
    sueldoAPagar = SUELDO_FIJO + (PREMIO * cantAutos);  //con constantes simbólicas

    cout << "El sueldo a pagar es de: $" << sueldoAPagar << endl;

    /* VARIANTE:
    cout << "El sueldo a pagar es de: $" << 5000 + (700 * cantAutos) << endl;
    */

    return 0;
}
