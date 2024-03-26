/**
  Hacer un programa que solicite al vendedor de un kiosco el nombre del producto, el precio unitario
  y la cantidad de unidades compradas por el cliente. Y muestre por pantalla el ticket de la operación
  con el siguiente formato:


  --------------------------
   PRODUCTO: Alfajor
   PPU     : 750.4
   CANT    : 2
  --------------------------
   TOTAL   : 1500.8

*/

#include <iostream>
using namespace std;

int main()
{
    string nombreProducto;
    float precioPorUnidad, total;
    int cantidad;

    cout << "Nombre del producto: ";
    cin >> nombreProducto;

    cout << "Precio por unidad: $ ";
    cin >> precioPorUnidad;

    cout << "Cantidad: ";
    cin >> cantidad;

    total = cantidad * precioPorUnidad;

    cout << endl;
    cout << " --------------------------" << endl;
    cout << "  PRODUCTO: " << nombreProducto << endl;
    cout << "  PPU     : $" << precioPorUnidad << endl;
    cout << "  CANT    : " << cantidad << " u" << endl;
    cout << " --------------------------" << endl;
    cout << "  TOTAL   : $" << total << endl;

    return 0;
}
