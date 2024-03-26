/**
    Hacer un programa que solicite un número entero por teclado y determine e informe
    si el número es positivo.
    Si el número no es positivo indicarlo con un mensaje.
*/

#include <iostream>
using namespace std;

int main(){
    int numero;
    cout << "Ingresar numero: ";
    cin >> numero;
    /*
        Operadores relacionales
        ------------------------
        >   Mayor que
        <   Menor que
        >=  Mayor o igual que
        <=  Menor o igual que
        ==  Igual que
        !=  Distinto que
    */
    if (numero > 0){
        cout << "Es positivo" << endl;
    }
    else{
        cout << "No es positivo" << endl;
    }

    cout << endl << "Fin del programa";

    return 0;
}
