#include <stdio.h>
#include <math.h>

int main(){
    int a;
    int b;
    int c;
    printf("Defina a: ");
    scanf("%i", &a);
    printf("Defina b: ");
    scanf("%i", &b);
    printf("Defina c: ");
    scanf("%i", &c);
    int delta = b*b - 4*a*c;
    if (delta < 0) {
        printf("Essa equacao nao possui raizes.");
    } else if ( delta >= 0){
        float x1 = (-b + sqrt(delta)) / 2*a;
        float x2 = (-b - sqrt(delta)) / 2*a;
        printf("As raizes da equacao sao: '%f' e '%f'.", x1, x2 );
    }

    return 0;
}