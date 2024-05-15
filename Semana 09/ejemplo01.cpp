#include <iostream>
using namespace std;

int main(){
  // Texto en cadenas de caracteres (string)
  string nombrePais, textoConValorInicial = "Este es el valor inicial de la variable";
  cout << "Ingresa un numero de pais: ";
  cin >> nombrePais;

  cout << endl << "Hola sos de " << nombrePais << "?" << endl << endl;

  if (nombrePais == "Argentina"){
      cout << endl << "Somos campeones del mundo !" << endl << endl;
  }

  // Caracteres
  char caracter, otroCaracterInicializado = 'H';
  cout << "Ingresa un caracter (letra, numero o simbolo): ";
  cin >> caracter;

  cout << "El caracter ingresado fue: " << caracter << endl;

  if (caracter == 'E'){
      cout << "Efectivo" << endl;
  }

  return 0;
}
