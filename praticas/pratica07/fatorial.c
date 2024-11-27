#include <stdio.h>

int main() {
    int numero;
    int fatorial;
    printf("Digite seu numero: ");
    scanf("%i", &numero);
    for(int i=numero; i>0; i--) {
        fatorial = fatorial * i;
        printf("Numero: %i, Fatorial: %i\n", &numero, &fatorial);
}
    return 0;
}