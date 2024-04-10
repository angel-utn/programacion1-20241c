/* Hacer un programa que calcule el promedio de notas de diez alumnos de TUP
NOTA: ingresar las diez notas por teclado
VARIANTE: promediar solamente las calificaciones desaprobadas < 6
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    int i;
    int nota;
    float promedio;
    int sumaNotas = 0;
    int cantNotas = 0;
    const int NOTAS = 10;

    for(int i=0; i<NOTAS; i++)
    {
        cout << "Ingrese la nota: ";
        cin >> nota;

        //cout << "i vale " << i << endl;
        //sumaNotas += nota;
        //cantNotas ++;

        if(nota < 6)
        {
            sumaNotas += nota;  // sumaNotas = sumaNotas + nota;
            cantNotas ++;
        }
    }

    /* VARIANTE: declaro la variable i en el ámbito(scope) del ciclo
    for(int i = 20; i < 20; i++){
      cout << "i vale " << i << endl; // si acá quisiera mostrar el valor de i, es válido
    }

    cout << i << endl; // si acá quisiera mostrar el valor de i, ya no puedo porque no existe (está fuera del ámbito donde se declaró)
    */

    //promedio = (float)sumaNotas / i; variante 1: para saber cantidad de notas aprovecho el valor de i cuando el ciclo termina

    //promedio = (float)sumaNotas / NOTAS; variante 2: para saber cantidad de notas utilizo la constante

    /* muestro por pantalla los valores de las variables para ver si puedo dividir
    cout << "sumaNotas: " << sumaNotas << endl;
    cout << "cantNotas: " << cantNotas << endl;
    */

    if(cantNotas == 0)
    {
        cout << "No hay notas para promediar" << endl;
        //OJO! Acá no sería correcto decir que el promedio es 0
    }
    else
    {
        promedio = (float)sumaNotas / cantNotas;
        cout << "El promedio es: " << promedio << endl;

    }

    return 0;
}
