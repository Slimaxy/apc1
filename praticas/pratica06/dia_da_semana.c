#include <stdio.h>

int main() {
    int dia;
    printf("Insira o dia da semana: ");
    scanf("%i", &dia);
    if (dia == 1) {
        printf("Hoje eh Domingo");
    } else if (dia == 2){
        printf("Hoje eh Segunda");
    } else if (dia == 3){
        printf("Hoje eh Terca");
    } else if (dia == 4){
        printf("Hoje eh Quarta");
    } else if (dia == 5){
        printf("Hoje eh Quinta");
    } else if (dia == 6){
        printf("Hoje eh Sexta");
    } else if (dia == 7){
        printf("Hoje eh Sabado");
    } else {
        printf("Dia informado eh invalido");
    }

    return 0;
}