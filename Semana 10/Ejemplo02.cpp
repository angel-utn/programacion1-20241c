#include <iostream>
using namespace std;

/**
Tipos de parámetros que puede recibir una función
-------------------------------------------------
  Parámetros por valor
  Parámetros por referencia
*/

void FuncionConParametroPorValor(int valor);
void FuncionConParametroPorReferencia (int &referencia);

int main(){
  int variable = 100, numero;

  cout << "Variable: " << variable << endl;
  numero = variable;
  FuncionConParametroPorReferencia(variable);
  cout << "Variable: " << variable << endl;
  cout << "Numero  : " << numero << endl;

  return 0;
}

void FuncionConParametroPorValor (int valor){
   cout << "Valor: " << valor << endl;
   valor = 500;
   cout << "Valor: " << valor << endl;
}

void FuncionConParametroPorReferencia (int &referencia){
   cout << "Referencia: " << referencia << endl;
   referencia = 500;
   cout << "Referencia: " << referencia << endl;
}
