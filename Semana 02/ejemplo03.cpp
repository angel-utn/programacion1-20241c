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

   Además, el programa debe solicitarle al vendedor con cuanto paga el cliente y calcular el vuelto.

*/

#include <iostream>
using namespace std;

int main()
{
    string nombreProducto;
    float precioPorUnidad, total, pagoCliente, vuelto;
    int cantidad;

    cout << "Nombre del producto: ";
    cin >> nombreProducto;

    cout << "Precio por unidad: $ ";
    cin >> precioPorUnidad;

    cout << "Cantidad: ";
    cin >> cantidad;

    total = cantidad * precioPorUnidad;

    cout << endl << "Total $ " << total << endl;

    cout << "Cliente abona: $";
    cin >> pagoCliente;

    vuelto = pagoCliente - total;

    cout << endl;
    cout << " --------------------------" << endl;
    cout << "  PRODUCTO : " << nombreProducto << endl;
    cout << "  PPU      : $" << precioPorUnidad << endl;
    cout << "  CANT     : " << cantidad << " u" << endl;
    cout << " --------------------------" << endl;
    cout << "  TOTAL    : $" << total << endl;
    cout << "  ABONA CON: $" << pagoCliente << endl;
    cout << "  VUELTO   : $" << vuelto << endl;


    return 0;
}
