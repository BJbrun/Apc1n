#include <stdio.h>

#define PRECO_FINAL 

int main() {
  // faça um programa C que calcule os impostos incluidos no preço de unm produto (preçofinal = (1 + ICMS + COFINS + PIS/PASEP) X PREÇO INICIAL). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.

  const float preco_produto = 100.0f;
  const float preco_icms = preco_produto * 0.17f;
  const float preco_cofins = preco_produto * 0.076f;
  const float preco_pispasep = preco_produto * 0.0165f;
  
  float preco_final = (1 + 0.17f + 0.076f + 0.0165f) * preco_produto;
   
  printf("O preco final do produto é %f\n", preco_final);
  printf("O valor do icms é %f\n", preco_icms);
  printf("O valor do cofins é %f\n", preco_cofins);
  printf("O valor do pispasep é %f\n", preco_pispasep);
  
  return 0;
}


#include <stdio.h>

#define ICMS 0.17f
#define COFINS 0.76f
#define PIS_PASEP 0.0165f

int main() {
  // faça um programa C que calcule os impostos incluidos no preço de unm produto (preçofinal = (1 + ICMS + COFINS + PIS/PASEP) X PREÇO INICIAL). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.

  const float preco_produto = 100.0f;
  const float preco_icms = preco_produto * ICMS;
  const float preco_cofins = preco_produto * COFINS;
  const float preco_pispasep = preco_produto * PIS_PASEP;
  
  float preco_final = (1 + ICMS + COFINS + PIS_PASEP) * preco_produto;
   
  printf("O preco final do produto é %f\n", preco_final);
  printf("O valor do icms é %f\n", preco_icms);
  printf("O valor do cofins é %f\n", preco_cofins);
  printf("O valor do pispasep é %f\n", preco_pispasep);
  
  return 0;
}