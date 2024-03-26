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

   Además, el programa debe solicitarle al vendedor con cuanto paga el cliente y calcular el vuelto o informar
   que el dinero no es suficiente (indicando cuánto adeuda).

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

    /// 1000 - 1000 --> Vuelto: $0
    /// 2000 - 1000 --> Vuelto: $1000
    ///  500 - 1000 --> Deuda: $500

    cout << endl;
    cout << " --------------------------" << endl;
    cout << "  PRODUCTO : " << nombreProducto << endl;
    cout << "  PPU      : $" << precioPorUnidad << endl;
    cout << "  CANT     : " << cantidad << " u" << endl;
    cout << " --------------------------" << endl;
    cout << "  TOTAL    : $" << total << endl;
    cout << "  ABONA CON: $" << pagoCliente << endl;

    if (vuelto >= 0){
        cout << "  VUELTO   : $" << vuelto << endl;
    }
    else{
        vuelto = vuelto * -1;
        cout << "  ADEUDA   : $" << vuelto << endl;
        // cout << "  ADEUDA   : $" << vuelto * -1 << endl; // Alternativa sin modificar la variable vuelto
    }


    return 0;
}
