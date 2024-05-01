#include <iostream>
using namespace std;
int main()
{
    float saldo = 13000, importeCompra;
    int cantCompras = 0;

    while(saldo >= 0)
    {
        cout << "Importe $: ";
        cin >> importeCompra;

        saldo = saldo - importeCompra;
        cantCompras++;
    }

    cout << "Cantidad de compras registradas: " << cantCompras << endl;

    return 0;
}
