#include <stdio.h>

int main () {
    char opcao;

    printf("        Lista de Compras\n");
    printf("------------------------------------------\n\n");


    do{
    printf("Menu Principal\n");
    printf("1. Ver a lista.\n");
    printf("2. Adcionar itens na lista.\n");
    printf("3. Retirar itens da lista.\n");
    printf("4. Salvar e Sair.\n");
    printf(" Por favor escolha o que deseja fazer: ");
    scanf("%i",&opcao);



    switch(opcao){

    case '1':
        break;
    case '2':
        break;
    case'3':
        break;
    case'4':
        break;
    default:
        printf("Opcao invalida");
            break;
    }

    }while(opcao !='4');
    
    return 0;
    }