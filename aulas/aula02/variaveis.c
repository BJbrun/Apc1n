#include <stdio.h>

int main() {
  //int
  int x= 0;
  int y=10;
  int z=20;

  char caracter; // 1 byte -128 a 127 'a', '1', ','
  
  unsigned char caracter_sem_sinal; // 0 a 255
  
  short int inteiro_curto; // 2 bytes -32768 a 32767
  
  int inteiro; // 4 bytes -2.147.483.648 a 2147483647

  long int inteiro_longo; // 8 bytes - 9.223.372.036.854.775.808 a 92233....

  unsigned int inteiro_sem_sinal; // 0 a 4.294.967.295

  unsigned long int inteiro_longo_sem_sinal; // 0 a 18.446....
  
  float ponto_flutuante; // 4 bytes 0.123456f

  double duplo; // 8bytes 0.1234567890123456

  void nada; // 1 bytes
  
  return 0;
}