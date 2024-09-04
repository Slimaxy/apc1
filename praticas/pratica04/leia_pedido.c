#include <stdio.h>
int main() {
  char produto[21];
  int quantidade;
  float valor;
  printf("Escolha seu produto: ");
  scanf("%[^\n]c", produto);
  printf("Escolha a quantidade: ");
  scanf("%i", &quantidade);
  printf("Valor do produto: ");
  scanf("%f", &valor);
  printf("%s\n", "==============================");
  printf("%9s %1s %1s %1s %1s %1s\n", "P", "E", "D", "I", "D", "O");
  printf("%s\n", "==============================");
  printf("Produto\t\t\tQtd Valor Unit\n");
  printf("%-15s\t%03i\t%10.2f\n", produto, quantidade, valor);
  printf("%s\n", "==============================");
  return 0;
}