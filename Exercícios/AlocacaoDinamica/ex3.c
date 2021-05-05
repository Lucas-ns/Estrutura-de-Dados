#include <stdio.h>
#include <stdlib.h>

float media(float *notas, int qtd_alunos)
{        
    float soma = 0, media = 0;

    for (int i = 1; i <= qtd_alunos; i++)
    {
        printf("Digite a nota do %dº aluno: ", i);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    media = (soma / qtd_alunos);
    return media;
}

int main()
{
    int qtd_alunos;
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &qtd_alunos);

    float *notas = (float *)malloc(qtd_alunos * sizeof(float));

    printf("Média dos alunos = %.1f\n", media(notas, qtd_alunos));

    free(notas);
}