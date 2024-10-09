#include <stdio.h>

int main() {
    float valor_bruto;
    float valor_desconto;
    printf("Insira o preco: ");
    scanf("%f", &valor_bruto);
    if (valor_bruto <= 100.00) {
        float valor_desconto = valor_bruto * 0.01f;
        printf("Seu desconto sera de %0.2f",  valor_desconto);
    } else if (100 < valor_bruto <= 500.0) {
        float valor_desconto = valor_bruto * 0.05f;
        printf("Seu desconto sera de %0.2f",  valor_desconto);
    } else {
        float valor_desconto = valor_bruto * 0.1f;
        printf("Seu desconto sera de %0.2f",  valor_desconto);
    }
    return 0;
}