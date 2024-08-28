#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
  printf("O tipo 'char' ocupa %lu byte(s) na memória.\n", sizeof(char));
  printf("O tipo 'int' ocupa %lu byte(s) na memória.\n", sizeof(int));
  printf("O tipo 'float' ocupa %lu byte(s) na memória.\n", sizeof(float));
  printf("O tipo 'double' ocupa %lu byte(s) na memória.\n", sizeof(double));
  printf("O tipo 'void' ocupa %lu byte(s) na memória.\n", sizeof(void));
  printf("O tipo 'char' aceita valores entre %i e %i\n.\n", CHAR_MIN, CHAR_MAX);
  printf("O tipo 'int' aceita valores entre %i e %i\n.\n", INT_MIN, INT_MAX);
  printf("O tipo 'float' aceita valores entre %E e %E\n.\n", FLT_MIN, FLT_MAX);
  printf("O tipo 'double' aceita valores entre %E e %E\n.\n", DBL_MIN, DBL_MAX);
  char tecla = 'A';
  printf("valor de tecla:%c\n", tecla);
  int idade = 25;
  printf("valor de idade:%i\n", idade);
  float nota = 8.6f; //6 casas decimais
  printf("valor de tecla:%f\n", nota);
  double pi = 3.14156293; //12 casas decimais
  printf("valor de pi:%.10f\n", pi);
  idade = 50;
  printf("valor de idade:%i\n", idade);
  return 0;
}