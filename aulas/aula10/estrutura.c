#include <stdio.h>

int main() {

    struct contato_t {
        char nome[61];
        long int telefone;
        char email[61];
    };

    struct contato_t contato;

    printf("Entre com o nome: ");
    scanf("%[^\n]s", contato.nome);
    while(getchar() != '\n');
    printf("Entre com o telefone: ");
    scanf("%[^\n]li", &contato.telefone);
    while(getchar() != '\n');
    printf("Entre com o email: ");
    scanf("%[^\n]s", contato.email);
    while(getchar() != '\n');

    printf("Dados do contato\n");
    printf("Nome....: %s\n", contato.nome);
    printf("Telefone..: %li\n", contato.telefone);
    printf("Email....: %s\n", contato.email);

    struct contato-t contatos [10];

    for (int i = 0; i , i < 10; i++)
    {
        printf("Entre com o nome: ");
        scanf("%[^\n]s", contatos[i].nome);
        while(getchar() != '\n');
        printf("Entre com o telefone: ");
        scanf("%[^\n]li", &contato[i].telefone);
        while(getchar() != '\n');
        printf("Entre com o email: ");
        scanf("%[^\n]s", contato[i].email);
        while(getchar() != '\n');
    }
    return 0;
}