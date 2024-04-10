/* TP 1 EJ 8
Hacer un programa para ingresar por teclado el importe de una venta sin el descuento y el
importe de esa misma venta con el descuento aplicado y luego informar por pantalla el
porcentaje de descuento aplicada a la misma.
Ejemplo A. Si el importe de la venta sin descuento es $1500 y el importe de la venta con
descuento es $1200 entonces el porcentaje de descuento aplicado fue el 20%.
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    float importeSinDesc, importeConDesc, porcDescuento;

    cout << "Ingrese importe sin descuento: ";
    cin >> importeSinDesc;
    cout << "Ingrese importe con descuento: ";
    cin >> importeConDesc;

    porcDescuento = (importeSinDesc - importeConDesc) * 100 / importeSinDesc;
    /* VARIANTE:
    porcDescuento = 100 - (importeConDesc * 100 / importeSinDesc);
    */
    cout << "El porcentaje de descuento es de: " << porcDescuento << "%" << endl;

    return 0;
}
