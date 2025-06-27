#include <stdio.h>
 
int main() {
 
   int distancia; 
   double combustivel, x;
   
  sacnf("%d %lf", &distancia, &combustivel);

  x = ( distancia / combustivel );

  printf ("%.3lf km/l\n", x);
 
    return 0;
}
