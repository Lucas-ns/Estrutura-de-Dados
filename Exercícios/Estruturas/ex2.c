#include <stdio.h>
#include <string.h>

typedef struct produto
{
    char nome[30];
    int codigo;
    float preco;
} Produto;

int main()
{
    Produto p[10];
    Produto *ptr[10];

    strcpy(p[0].nome, "Pe de moleque");
    p[0].codigo = 13205;
    p[0].preco = 0.20;

    strcpy(p[1].nome, "Cocada Baiana");
    p[1].codigo = 15202;
    p[1].preco = 0.50;

    ptr[0] = p;

    strcpy(ptr[1]->nome, "Cocada Baiana");
    ptr[1]->codigo = 15202;
    ptr[1]->preco = 0.50;

    for (int i = 0; i < 2; i++)
    {
        printf("Nome: %s\n", ptr[i]->nome);
        printf("Codigo: %d\n", ptr[i]->codigo);
        printf("Preço: %.2f\n", ptr[i]->preco);
    }

    return 0;
}