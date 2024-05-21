#include <iostream>
using namespace std;

/**
   Funci�n:
   --------
   Nombre
   Puede tener: Valor de retorno (tipo de dato)
   Puede tener: Par�metros
*/

/// Declaraci�n de la funci�n (prototipo)
int sumarDosNumeros(int num1, int num2);

/// Definici�n de la funci�n
int sumarDosNumeros(int num1, int num2){
    int resultado;
    resultado = num1 + num2;
    return resultado;
}

int main(){
   /// Llamado o uso de la funci�n
   int a, b, c, doble;
   a = 1000;
   b = 500;

   c = sumarDosNumeros(a, b);
   doble = sumarDosNumeros(c, c);

   cout << "Resultado: " << c << endl;
   cout << "El doble del resultado es: " << doble;


  return 0;
}
