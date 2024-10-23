#include <stdio.h>
#include <math.h>

int main() {
    float numero1;
    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);
    getchar();
    char operacao;
    printf("Digite a operacao: ");
    scanf("%c", &operacao); 
    getchar();
    float numero2;
    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);
    if (operacao == '+') {
        float resultado = numero1 + numero2;
        printf ("%.2f + %.2f = %.2f", numero1, numero2, resultado);
    } else if (operacao == '-') {
        float resultado = numero1 - numero2;
        printf ("%.2f - %.2f = %.2f", numero1, numero2, resultado);
    } else if (operacao == '/') {
        float resultado = numero1 / numero2;
        printf ("%.2f / %.2f = %.2f", numero1, numero2, resultado);
    } else if (operacao == '*') {
        float resultado = numero1 * numero2;
        printf ("%.2f * %.2f = %.2f", numero1, numero2, resultado);
    } else {
        printf("Operacao invalida");
    }
    return 0;
}