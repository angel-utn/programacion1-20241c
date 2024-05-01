/***
28
Hacer un programa que contenga un men£ con el siguiente formato:

Men£ principal
-----------------------------
1 - Ingresar medida en metros
2 - Convertir a cent¡metros
3 - Convertir a kil¢metros
4 - Convertir a pulgadas
5 - Convertir a pies
-----------------------------
0 - Salir del programa

Ingrese opci¢n:


Al ingresar a la opci¢n 1, nos pedir  una medida (float) en metros que con las siguientes
opciones del men£ podremos mostrarla convertida a otras unidades.

El programa debe permitir al usuario ingresar a las opciones las veces que lo desee
y s¢lo finalizar  al ingresar a la opci¢n 0.

*/

#include <iostream>

using namespace std;

int main()
{
    int opcion;
    float medidas = 0;
    bool seIngresoMedidas= false;

    do
    {
        system("cls");
        cout << "Men£ principal" << endl;
        cout << "-----------------------------" << endl;
        cout << "1 - Ingresar medida en metros" << endl;
        cout << "2 - Convertir a cent¡metros" << endl;
        cout << "3 - Convertir a kil¢metros" << endl;
        cout << "4 - Convertir a pulgadas" << endl;
        cout << "5 - Convertir a pies" << endl;
        cout << "-----------------------------" << endl;
        cout << "0 - Salir del programa" << endl;
        cout << endl;
        cout << "Ingrese opci¢n:" << endl;
        cin >> opcion;

        switch(opcion)
        {
        case 1:
            cout << "Ingrese la medida en metros: ";
            cin >> medidas;
            seIngresoMedidas = true;
            break;
        case 2:
            if(seIngresoMedidas)
            {
                cout << medidas << " m son "<< (medidas*100) << " cm" << endl;
            }
            break;
        case 3:
            if(seIngresoMedidas)
            {
                cout << medidas << " m son "<< (medidas/1000) << " km" << endl;
            }
            break;
        case 4:
            if(seIngresoMedidas)
            {
                cout << medidas << " m son "<< (medidas*39.3701) << " pulgadas" << endl;
            }
            break;
        case 5:
            if(seIngresoMedidas)
            {
                cout << medidas << " m son "<< (medidas*3.2808) << " pies" << endl;
            }
            break;
        }
        
        if(opcion >=2 && opcion <=5){
            if(!seIngresoMedidas){
                cout << "No se ingresaron medidas a calcular!" << endl;
            }
            system("pause");
        }
    }
    while(opcion != 0);

    cout << "Gracias por utilizar mi app! pagame un cafecito :)"<< endl;

    return 0;
}







