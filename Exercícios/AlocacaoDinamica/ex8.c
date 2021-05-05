#include <stdio.h>
#include <stdlib.h>

typedef struct aluno
{
    char nome[30];
    float media;
    int faltas;
} Aluno;

void ler_alunos(Aluno *aluno, int qtd_alunos)
{
    printf("------ Cadastrando Alunos ------\n");
    for (int i = 0; i < qtd_alunos; i++)
    {
        printf("Nome: ");
        scanf("%s", &aluno[i].nome);
        printf("Média: ");
        scanf("%f", &aluno[i].media);
        printf("Faltas: ");
        scanf("%d", &aluno[i].faltas);
        printf("---------------\n");
    }
}

void imprimir_alunos(Aluno *aluno, int qtd_alunos)
{
    float maior = 0;
    printf("------ Mostrando Alunos ------\n");
    for (int i = 0; i < qtd_alunos; i++)
    {
        if (i == 0)
        {
            maior = aluno[i].media;
        }
    }
}

int main()
{
    int qtd_alunos;
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &qtd_alunos);
    Aluno *a = (Aluno *) malloc(qtd_alunos * sizeof(Aluno));
    ler_alunos(a, qtd_alunos);
    imprimir_alunos(a, qtd_alunos);
    free(a);
}