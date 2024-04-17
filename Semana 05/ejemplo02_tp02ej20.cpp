/*
TP2 EJ20
Hacerunprogramaenelqueseingrese la edad y altura de 5 personas. Luego,
calcular e informar:
- La cantidad de personas mayores a 30 años que midan más de 1.8
metros. (1 vez, int, siempre)

- El promedio de altura de las personas mayores a 30 años. (1 vez, float, condicional)

- La cantidad de personas con altura entre 1.7 y 1.8 (ambos inclusive)  (1 vez, int, siempre)

- La cantidad de personas cuya edad sea de 20, 30 o 40 años (1 vez, int, siempre)


Datos Entrada ---> ????? ->>> Información salida

*/
#include <iostream>
using namespace std;

int main()
{
    const int CANT_PERSONAS = 2;
    int edad, i;
    float altura;

/// A
    int cantMasDe30AniosyMasDe180Mts = 0;

/// B
    int cantMasDe30Anios = 0;
    float sumaAlturaMas30Anios = 0, promedioAltura = 0;

/// C
    int cantPersonasEntre170y180 = 0;

// D
    int cantPersonasCon203040Anios = 0;

    for(i=1; i<=CANT_PERSONAS; i++)
    {
        cout << "Persona #" << i << " de " << CANT_PERSONAS << endl;
        cout << "Edad: ";
        cin >> edad;

        cout << "Altura: ";
        cin >> altura;

/// A
        if (edad > 30 && altura > 1.8)
        {
            cantMasDe30AniosyMasDe180Mts++;
        }
/// B
        if (edad > 30)
        {
            cantMasDe30Anios++;
            sumaAlturaMas30Anios += altura;
        }

/// C
        if (altura >= 1.7 && altura <= 1.8)
        {
            cantPersonasEntre170y180++;
        }
/// D
        if (edad == 20 || edad == 30 || edad == 40)
        {
            cantPersonasCon203040Anios++;
        }
    }


    cout << endl << endl;
    cout << "PUNTO A " << endl << "-------------------------" << endl;
    cout << "Cantidad de personas +30 y +1.8mts: " << cantMasDe30AniosyMasDe180Mts << endl << endl;

    cout << "PUNTO B " << endl << "-------------------------" << endl;

    if (cantMasDe30Anios > 0)
    {
        promedioAltura = sumaAlturaMas30Anios / cantMasDe30Anios;
        cout << "Promedio de altura +30: " << promedioAltura << " mts" << endl << endl;
    }
    else
    {
        cout << "No hay datos para calcular el promedio" << endl << endl;
    }

    cout << "PUNTO C " << endl << "-------------------------" << endl;
    cout << "Cantidad de personas entre 1.7mts y 1.8mts: " << cantPersonasEntre170y180 << endl << endl;

    cout << "PUNTO D " << endl << "-------------------------" << endl;
    cout << "Cantidad de personas con 20, 30 o 40 anios: " << cantPersonasCon203040Anios << endl << endl;


    return 0;
}
