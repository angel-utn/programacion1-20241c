#include <iostream>

using namespace std;

int main(){
    
    int numero;
    int i, cantDiv=0;
    
    cout << "Ingrese numero: ";
    cin >> numero;
    
    for(i=1; i<=numero; i++){ /// contar la cantidad de divisores
        if(numero%i == 0){ /// averguar si es divisor del numero
            cantDiv++;
        }
    }
    
    if(cantDiv == 2){
        cout << "Es primo" << endl;
    }
    else{
        cout << "No es primo" << endl;
    }
    
    
    
    
    return 0;
}
