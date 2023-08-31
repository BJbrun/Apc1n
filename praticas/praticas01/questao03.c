#include <stdio.h>

int main() {
  // calcule o perimetro de uma pizza(P = 2 x 3,1416 x r )
  int x = 2;
  float PI = 3.1416;
  int r = 4;

  float P = x * PI * r;
  
  printf("O perimetro é %.4f", P);

    
   return 0;
}