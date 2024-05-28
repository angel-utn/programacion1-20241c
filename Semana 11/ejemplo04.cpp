/**
  Cargar 10 números y guardarlos en un vector. Calcular el promedio y luego mostrar por pantalla los
  valores que son mayores al promedio.
*/
#include <iostream>
using namespace std;

void cargarVector(float v[], int tamanio);
float sumarVector(float v[], int tamanio);
void mostrarElementosMayoresA(float vec[], int tamanio, float valorDeComparacion);

void cargarVector(float v[], int tamanio){
  int i;
  for(i=0; i<tamanio; i++){
   cin >> v[i];
  }
}

float sumarVector(float lista[], int tamanio){
  int i, suma = 0;
  for(i=0; i<tamanio; i++){
   suma += lista[i];
  }
  return suma;
}

void mostrarElementosMayoresA(float vec[], int tamanio, float valorDeComparacion){
   int i;
   for(i=0; i<tamanio; i++){
      if (vec[i] > valorDeComparacion){
         cout << vec[i] << " ";
      }
   }
}


int main(){
  const int TAM = 10;
  float vectorcito[TAM], suma, promedio;

  cargarVector(vectorcito, TAM);
  suma = sumarVector(vectorcito, TAM);
  promedio = suma / TAM;
  cout << endl << "Valores mayores al promedio: " << endl;
  mostrarElementosMayoresA(vectorcito, TAM, promedio);

  return 0;
}
