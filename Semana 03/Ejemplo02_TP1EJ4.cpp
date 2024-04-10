/* TP 1 EJ 4
Hacer un programa para ingresar por teclado la cantidad de asientos totales en un avión y la
cantidad de pasajes ocupados y luego calcular e informar el porcentaje de ocupación y el
porcentaje de no ocupación del mismo.
Ejemplo si el avión tiene 200 asientos totales y se vendieron 80 pasajes, el porcentaje de
ocupación que se informará será de un 40% y el porcentaje de no ocupación será de un 60%.
*/

#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Spanish");

  int asientosTotales;
  int pasajesOcupados;
  float porcOcupacion, porcNoOcupacion;

  cout << "Ingrese cantidad de asientos totales: ";
  cin >> asientosTotales;
  cout << "Ingrese cantidad de pasajes ocupados: ";
  cin >> pasajesOcupados;

  porcOcupacion = (float)pasajesOcupados * 100 / asientosTotales;

  porcNoOcupacion = 100 - porcOcupacion;

  cout << "El porcentaje de ocupación es de: " << fixed << setprecision(2) << porcOcupacion << "%" << endl;
  cout << "El porcentaje de no-ocupación es de: " << fixed << setprecision(2) << porcNoOcupacion << "%" << endl;

	return 0;
}
