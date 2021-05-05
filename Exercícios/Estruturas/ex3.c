#include <stdio.h>

typedef struct contato
{
    char nome[20];
    char telefone_residencial[12];
    char telefone_celular[12];
} Contato;

int menu()
{
    Contato c[100];
    int i = 0;
    char inicial;

    while (1)
    {
        int opc;
        printf("AGENDA\n");
        printf("====================\n");
        printf("1 - Insere contato\n");
        printf("2 - Remove contato\n");
        printf("3 - Busca nome\n");
        printf("4 - Imprime por iniciais\n");
        printf("0 - Sair\n");
        printf("====================\n");
        printf("Digite a opção escolhida: ");
        scanf("%d", &opc);

        if (opc == 1)
        {
            printf("Digite o nome a ser inserido: ");
            scanf("%s", &c[i].nome);
            printf("Telefone residencial: ");
            scanf("%s", &c[i].telefone_residencial);
            printf("Telefone celular: ");
            scanf("%s", &c[i].telefone_celular);

            printf("Contato registrado com sucesso!\n");
        }
        if (opc == 2)
        {
            printf("Digite o nome a ser removido: ");
        }
        if (opc == 3)
        {
            printf("Digite a letra inicial do nome desejado: ");
            scanf("%s", &inicial);
        }
        if (opc == 4)
        {
            
        }
        if (opc == 0)
        {
            printf("Encerrando o programa!\n");
            break;
        }
        if (opc > 4 && opc < 0)
        {
            printf("Opção inválida! Tente outra opção.\n");
        }
        i++;
        printf("%s", c[i].nome);
    }
    return 1;
}

int main()
{
    menu();
}