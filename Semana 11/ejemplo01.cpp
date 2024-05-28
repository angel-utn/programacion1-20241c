#include <iostream>
using namespace std;

int main(){
  int mi_vector[4] = {10, 20, 30, 40};
  int i;

  for(i=0; i<4; i++){
   cout << mi_vector[i] << endl;
  }

  // Todos los elementos incrementen 1
  for(i=0; i<4; i++){
   mi_vector[i]++;
  }

  cout << endl;
  for(i=0; i<4; i++){
   cout << mi_vector[i] << endl;
  }

  return 0;
}
