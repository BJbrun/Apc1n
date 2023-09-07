#include <stdio.h>

int global =20; //variavel compartilhada

int main() {
  int local = 10; //variavel temporaria

  printf("gloabal = %i, local = %i\n", global, local);
  
  {
   int local =20;
   int temp = 10;
    print("global %i, local = %i\n", global, local);
  }

  //local = temp; temp não existe 

  return 0;
}