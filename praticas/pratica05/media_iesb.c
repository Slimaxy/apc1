#include <stdio.h>

int main() {
  float nota_a1;
  float nota_a2;
  scanf("%f", &nota_a1);
  scanf("%f", &nota_a2);
  float media_iesb = nota_a1 * 0.4 + nota_a2 * 0.6;
  printf("Nota da p1 = %.1f, nota da p2 = %.1f, média da matéria = %.1f\n", nota_a1, nota_a2, media_iesb);
  return 0;
}