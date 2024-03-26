/**
  Hacer un programa que permita ingresar dos nros enteros
  y nos muestre de dividir el primero por el segundo.
*/

/**
    ENTRADA    -->     ????    -->   SALIDA
*/

#include <iostream>
using namespace std;

int main(){
  int num1, num2, cociente, resto;
  float resultado;

  cout << "Ingresar primer número: ";
  cin >> num1;
  cout << "Ingresar segundo número: ";
  cin >> num2;

  cociente = num1 / num2;
  resto = num1 % num2;

  /**
    int / int --> int  (cociente)
    float / int --> float
    int / float --> float
    float / float --> float
  */
  resultado = (float) num1 / num2;

  cout << endl << "-------------------------------" << endl;
  cout << "El cociente es  : " << cociente << endl;
  cout << "El resto es     : " << resto << endl;
  cout << "El resultado es : " << resultado;

  return 0;
}
