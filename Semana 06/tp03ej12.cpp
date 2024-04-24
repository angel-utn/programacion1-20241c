/**
    Hacer un programa para ingresar una lista de 10 n£meros
    e informar
        - el m ximo de los negativos
        - el m¡nimo de los positivos
    Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24. M ximo Negativo -3. M¡nimo Positivo 2.
*/
#include <iostream>

using namespace std;

int main(){
    int i;
    int numero, maximoNegativo = 0, minimoPositivo, contPositivos = 0;/// cero es absurdo por que ningun numero negativo es cero


    for(i=1; i<=10; i++){ /// pido la lista de numeros
        cout << "Ingrese numero: ";
        cin >> numero;

        if(numero < 0){ /// averiguo que es un negativo
            if(maximoNegativo == 0 || numero > maximoNegativo){ /// averiguo el maximo
                maximoNegativo = numero;
            }
        }
        else{
            if (numero > 0){ /// averiguar si el numero es positivo
               contPositivos++;

               if(contPositivos == 1 || numero < minimoPositivo){ /// averiguar el minimo
                  minimoPositivo = numero;
               }
            }
        }
    }

    if(maximoNegativo != 0){ /// verificamos si ingresaron negativos
        cout << "El maximo de los negativos es: " << maximoNegativo << endl;
    }
    else{
        cout << "No se ingresaron numeros negativos." << endl;
    }

    if (contPositivos >= 1){
      cout << "El minimo de los positivos es: " << minimoPositivo << endl;
    }
    else{
      cout << "No se ingresaron numeros positivos." << endl;
    }


    return 0;
}
