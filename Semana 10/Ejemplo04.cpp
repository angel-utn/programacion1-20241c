/**

Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por un operario y
el valor que se le paga por hora trabajada y listar por pantalla el sueldo que le corresponda.

*/

float multiplicar(float num1, float num2);

float multiplicar(float num1, float num2){
   float resultado;
   resultado = num1 * num2;
   return resultado;
}


#include <iostream>
using namespace std;

int main(){
  int horasTrabajadas;
  float valorHora, sueldo;

  cout << "Ingresar valor de hora y cantidad de horas trabajadas: " << endl;
  cin >> valorHora;
  cin >> horasTrabajadas;

  sueldo = multiplicar(valorHora, horasTrabajadas);

  cout << "El sueldo es: $ " << sueldo;

  return 0;
}
