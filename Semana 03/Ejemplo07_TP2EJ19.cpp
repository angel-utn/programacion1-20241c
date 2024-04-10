/* TP 2 EJ 19
El costo de un desarrollo de un proyecto de software se calcula en base al lenguaje que se
necesita:

Nombre 	Tipo 	Valor hora
C/C++ 	'C' 	$ 7500
C# 		  '#' 	$ 6100
Python  'P' 	$ 5400
Go 		  'G' 	$ 5000

Además, si el proyecto es marcado como Urgente, se le aumenta un 120 % más al costo del
proyecto.
Le solicitan un programa que permita calcular el costo total de un proyecto basado en la
cantidad de horas (int), el tipo de lenguaje (char) y si es urgente o no (bool)
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    const int LENG_C = 7500;
    const int LENG_C_SHARP = 6100;
    const int LENG_P = 5400;
    const int LENG_G = 5000;

    int horas;
    char lenguaje;
    bool urgente;
    float costo;

    cout << "Ingrese cantidad de horas: ";
    cin >> horas;
    cout << "Ingrese lenguaje: ";
    cin >> lenguaje;
    cout << "¿Es urgente? (SI = 1, NO = 0): ";
    cin >> urgente;

    /*  VARIANTE 1: INGRESO URGENCIA CON UN CHAR
    char urg;
    cout << "Es urgente: S/N: ";
    cin >> urg;
    urgente = (urg == 'S' || urg == 's');
    */

    /*  VARIANTE 2: INGRESO URGENCIA CON UN CHAR
    char urg;
    cout << "Es urgente: S/N: ";
    cin >> urg;
    if(urg == 'S' || urg == 's'){
      urgente = true;
    }
    else{
      urgente = false;
    }
    */

    /* VARIANTE: con if
    if(lenguaje == 'C'){
      costo = horas * LENG_C;
    }
    else if(lenguaje == '#'){
      costo = horas * LENG_C_SHARP;
    }
    else if(lenguaje == 'P'){
      costo = horas * LENG_P;
    }
    else{
      costo = horas * LENG_G;
    }
    */

    // VARIANTE CON SWITCH
    switch(lenguaje)   //ASCII, los caracteres se interpretan como números
    {
    case 'C':
    case 'c':
        costo = horas * LENG_C;
        break;
    case '#':
        costo = horas * LENG_C_SHARP;
        break;
    case 'P':
    case 'p':
        costo = horas * LENG_P;
        break;
    default:  //si no estuviéramos en ambiente ideal deberíamos especificar case 'G'
        costo = horas * LENG_G;
        break;
    }

    if(urgente == 1)  // también se puede preguntar if(urgente)
    {
        costo = costo * 2.2;
    }

    cout << "El costo final del proyecto es de $" << costo << endl;

    return 0;
}
