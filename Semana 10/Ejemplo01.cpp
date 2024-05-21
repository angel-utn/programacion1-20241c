#include <iostream>
using namespace std;

/**
   Función:
   --------
   Nombre
   Puede tener: Valor de retorno (tipo de dato)
   Puede tener: Parámetros
*/

/// Declaración de la función (prototipo)
int sumarDosNumeros(int num1, int num2);

/// Definición de la función
int sumarDosNumeros(int num1, int num2){
    int resultado;
    resultado = num1 + num2;
    return resultado;
}

int main(){
   /// Llamado o uso de la función
   int a, b, c, doble;
   a = 1000;
   b = 500;

   c = sumarDosNumeros(a, b);
   doble = sumarDosNumeros(c, c);

   cout << "Resultado: " << c << endl;
   cout << "El doble del resultado es: " << doble;


  return 0;
}
