
/***
 Dada una lista de 7 números informar 
    - el primer número par ingresado  y su ubicación en la lista y 
    - el último de los números primos y su ubicación en la lista. 
 
 Ejemplo A: 7, 4, 5, 6, 9, 13, 10 se 
 informa: 
    Primer número par: 4 ubicación 2. Último primo: 13 ubicación 6. 
 Ejemplo B: 9, 5, 21, 9, 13, 15, 6 se 
 informa: 
    Primer número par: 6 ubicación 7. Último primo: 13 ubicación 5.

7
4
5
6
9
13
10

*/
#include <iostream>

using namespace std;

int main(){
    
    int i,j, numero, primerPar, primerParPos, ultimoPrimo, ultimoPrimoPos = 0;
    int cantPares = 0, cantDiv;
    
    for(i = 1; i<=7; i++){
        cout << "Ingrese numero: ";
        cin >> numero;
        
        if(numero%2 == 0){
            cantPares++;
            if(cantPares == 1){
                primerPar = numero;
                primerParPos = i;
            }
        }
        
        /// buscamos si el numero es primo
        cantDiv = 0;
        for(j=1; j<=numero; j++){ /// contar la cantidad de divisores
            if(numero%j == 0){ /// averguar si es divisor del numero
                cantDiv++;
            }
        }
        
        if(cantDiv == 2){ /// si es primo
            ultimoPrimo = numero;
            ultimoPrimoPos = i;
        }
    }
    
    if(cantPares > 0){
        cout << "Primer Par: " << primerPar << endl;
        cout << "Posicion #" << primerParPos << endl;
    }
    else{
        cout << "No se ingresaron numeros pares."<<endl;
    }
    
    if(ultimoPrimoPos > 0){
        cout << "Ultimo primo: " << ultimoPrimo << endl;
        cout << "Posicion #" << ultimoPrimoPos << endl;
    }
    else{
        cout << "No se ingresaron numeros primos." << endl;
    }
    return 0;
}




