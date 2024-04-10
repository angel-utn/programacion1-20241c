/* TP 1 EJ 9
Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por pantalla a
cuantas horas y minutos equivalen.
Ejemplo A: si se ingresan 380 minutos el programa mostrará por pantalla que equivalen a 6
horas y 20 minutos.
Ejemplo B: si se ingresan 720 minutos el programa mostrará por pantalla que equivalen a 12
horas y 0 minutos.
Ejemplo C: si se ingresan 50 minutos el programa mostrará por pantalla que equivalen a 0 horas
y 50 minutos
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    int minutosTotales, horas, minutos;

    cout << "Ingresar cantidad de minutos: ";
    cin >> minutosTotales;

    horas = minutosTotales / 60;
    minutos = minutosTotales % 60;

    cout << "La cantidad de horas es: " << horas << " hora/s" << endl;
    cout << "La cantidad de minutos es: " << minutos << " minuto/s" << endl;

    return 0;
}
