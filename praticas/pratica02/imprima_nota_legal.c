#include <stdio.h>
int main() {
  printf("%s\n", "==============================");
  printf("%6s %1s %1s %1s %4s %1s %1s %1s %1s\n", "N", "O", "T", "A", "L", "E", "G", "A", "L");
  printf("%s\n", "==============================");
  printf("%-15s %s %1s %1s\n", "Produto", "Qtd", "Valor", "Unit");
  printf("%-15s %.3i %10.2f\n", "Camiseta", 002, 39.99);
  printf("%-15s %.3i %10.2f\n", "Calca", 001, 89.90);
  printf("%-15s %.3i %10.2f\n", "Meia Social", 003, 19.99);
  printf("%s\n", "==============================");
  printf("%s %23.2f\n", "Total:", 229.85);
  return 0;
}