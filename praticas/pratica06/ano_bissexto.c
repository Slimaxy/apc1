#include <stdio.h>

int main() {
    int ano;
    printf("Insira um ano: ");
    scanf("%i", &ano);
    int ano_multiplo_de_4 = ano % 4 == 0 ;
    int ano_multiplo_de_100 = ano % 100 == 0 ;
    int ano_multiplo_de_400 = ano % 400 == 0 ;
    if ((ano_multiplo_de_4 && !ano_multiplo_de_100) || ano_multiplo_de_400){
    printf("Esse ano e bissexto.");
    } else {
        printf("Esse ano nao e bissexto.");
    }
    return 0;
}