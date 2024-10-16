#include <stdio.h>

int main() {
    float temp;
    printf("Digite a temperatura: ");
    scanf("%f", &temp);
    if (temp > 40.0f){
        printf("Esta muito quente.");
    } else if (30.0f < temp && temp <= 40.0f){
        printf("Esta quente.");
    } else if (20.0f < temp && temp <= 30.0f){
        printf("Esta agradavel.");
    } else if (20.0f >= temp){
        printf("Esta frio.");
    }
    return 0;
}