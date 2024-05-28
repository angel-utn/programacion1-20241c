#include <iostream>
using namespace std;

int main(){
  const int TAM = 4;
  int vec[TAM], i, suma = 0;

  cout << "Ingresar " << TAM << " números al vector: " << endl;
  /// Cargar el vector
  for(i=0; i<TAM; i++){
   cin >> vec[i];
  }
  cout << endl << "Contenido del vector" << endl;
  /// Mostrar el vector
  for(i=0; i<TAM; i++){
   cout << vec[i] << " ";
  }
  /// Sumar el vector
  for(i=0; i<TAM; i++){
   suma += vec[i];
  }
  /// Mostrar la suma de todos los elementos del vector
  cout << endl << endl << "La suma de los elementos del vector es: " << suma;

  return 0;
}
