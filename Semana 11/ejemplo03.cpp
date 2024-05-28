#include <iostream>
using namespace std;

void cargarVector(int v[], int tamanio);
void mostrarVector(int v[], int tamanio);
int sumarVector(int v[], int tamanio);

void cargarVector(int v[], int tamanio){
  int i;
  for(i=0; i<tamanio; i++){
   cin >> v[i];
  }
}

void mostrarVector(int v[], int tamanio){
  int i;
  for(i=0; i<tamanio; i++){
   cout << v[i] << " ";
  }
}

int sumarVector(int lista[], int tamanio){
  int i, suma = 0;
  for(i=0; i<tamanio; i++){
   suma += lista[i];
  }
  return suma;
}

int main(){
  const int TAM = 3;
  int vec[TAM], resultado;

  cout << "Ingresar " << TAM << " números al vector: " << endl;
  cargarVector(vec, TAM);

  cout << endl << "Contenido del vector" << endl;
  mostrarVector(vec, TAM);

  resultado = sumarVector(vec, TAM);

  cout << endl << endl << "La suma de los elementos del vector es: " << resultado;

  return 0;
}
