#include <stdio.h>

int main() {
  int matricula;
  float a1;
  float a2;
  float media;
  printf("Digite sua matricula: ");
  scanf("%i", &matricula);
  printf("Digite sua primeira nota: ");
  scanf("%f", &a1);
  printf("Digite sua segunda nota: ");
  scanf("%f", &a2);
  printf("Digite sua media: ");
  scanf("%f", &media);
  printf("%s\t%s\t%s\t%s\t\n", "Matricula", "A1", "A2", "Media");
  printf("%i\t%.1f\t%.1f\t%.1f\t\n", matricula, a1, a2, media);
  return 0;
}