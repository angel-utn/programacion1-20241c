#include <iostream>
using namespace std;

int main()
{
    int cantExamenes = 0;
    float sumaNotas = 0, nota;


    cout << "Nota: ";
    cin >> nota;

    while (nota >= 1 && nota <= 10)
    {
        cantExamenes++;
        sumaNotas += nota;

        cout << "Nota: ";
        cin >> nota;
    }

    cout << endl << "Cantidad exámenes: " << cantExamenes << endl;
    if (cantExamenes > 0)
    {
        cout << "Promedio: " << sumaNotas / cantExamenes << endl;
    }


    return 0;
}
