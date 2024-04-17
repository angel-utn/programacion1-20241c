/**
  Alternativa de Tomas Guzman
*/
#include <iostream>
using namespace std;

int main() {

  float a1, a2, a3, a4, a5, e1, e2, e3, e4, e5, m, e, al, p, promedio, sumarAlturas;
  cout << " Ingresar edad : ";
  cin >> e1;
  cout << " Ingresar altura: ";
  cin >> a1;
  cout << " Ingresar edad : ";
  cin >> e2;
  cout << " Ingresar altura: ";
  cin >> a2;
  cout << " Ingresar edad : ";
  cin >> e3;
  cout << " Ingresar altura : ";
  cin >> a3;
  cout << " Ingresar edad : ";
  cin >> e4;
  cout << " Ingresar altura: ";
  cin >> a4;
  cout << " Ingresar edad: ";
  cin >> e5;
  cout << " Ingresar altura : ";
  cin >> a5;

  cout << endl;

  m = 0;
  e = 0;
  al = 0;
  p = 0;
  promedio = 0;
  sumarAlturas = a1 + a2 + a3 + a4 + a5;



  if ((e1 > 30) && (a1 > 1.8)) {

    m++;

  }

  if ((e2 > 30) && (a2 > 1.8)) {

    m++;

  }

  if ((e3 > 30) && (a3 > 1.8)) {

    m++;

  }

  if ((e4 > 30) && (a4 > 1.8)) {

    m++;

  }

  if ((e5 > 30) && (a5 > 1.8)) {

    m++;

  }



  cout << " cantidad de personas mayores a 30 anios que midan mas de 1.8 metros:" << m << endl;


  if ((a1 >= 1.7) && (a1 <= 1.8)) {

    al = al + 1;

  }

  if ((a2 >= 1.7) && (a2 <= 1.8)) {

    al = al + 1;

  }

  if ((a3 >= 1.7) && (a3 <= 1.8)) {

    al = al + 1;

  }

  if ((a4 >= 1.7) && (a4 <= 1.8)) {

    al = al + 1;

  }

  if ((a5 >= 1.7) && (a5 <= 1.8)) {

    al = al + 1;

  }



 cout << " cantidad de personas con altura entre 1.7 y 1.8 : " << al << endl;





if ( e1 > 30 ){

p = p + 1 ;

}

if ( e2 > 30 ){

p = p + 1 ;

}

if ( e3 > 30 ){

p = p + 1 ;

}

if ( e4 > 30 ){

p = p + 1 ;

}

if ( e5 > 30 ){

p = p + 1 ;



promedio = sumarAlturas / p;



}



cout << " El promedio de altura de las personas mayores a 30 anios: " << promedio << endl;



if ((e1 == 20) || (e1 == 30) || (e1 == 40)) {

    e = e+1;

  }

if ((e2 == 20) || (e2 == 30) || (e2 == 40)) {

    e = e+1;

  }

if ((e3 == 20) || (e3 == 30) || (e3 == 40)) {

    e = e+1;

  }

if ((e4 == 20) || (e4 == 30) || (e4 == 40)) {

    e = e+1;

  }

if ((e5 == 20) || (e5 == 30) || (e5 == 40)) {

    e = e+1;

 }



cout << " La cantidad de personas que tienen exactamente 20, 30, 40 son: " << e << endl;



return 0 ;

}
