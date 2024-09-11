#include <stdio.h>

int main() {
  #define ICMS 0.17
  #define COFINS 0.076
  #define PIS_PASEP 0.0165
  float preco_inicial;
  scanf("%f",&preco_inicial);
  float valor_icms = ICMS * preco_inicial;
  float valor_cofins = COFINS * preco_inicial;
  float valor_pis_pasep = PIS_PASEP * preco_inicial;
  printf("Preço Inicial..........: R$ %.2f\n", preco_inicial);
  printf("Valor ICMS (17%).......: R$ %.2f\n", valor_icms);
  printf("Valor COFINS (7,6%)....: R$ %.2f\n", valor_cofins);
  printf("Valor PIS/PASEP (1,65%): R$ %.2f\n", valor_pis_pasep);
  printf("Preço Final............: R$ %.2f\n", preco_inicial + valor_icms + valor_cofins + valor_pis_pasep);
  return 0;
}