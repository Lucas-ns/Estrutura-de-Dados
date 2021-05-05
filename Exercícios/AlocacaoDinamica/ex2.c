#include <stdio.h>
#include <stdlib.h>

void ler_vetor(int *v, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("Digite o valor da posição %d: ", i);
        scanf("%d", &v[i]);
    }
}

int main()
{
    int tam;
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &tam);

    int *v = (int *)malloc(tam * sizeof(int));
    ler_vetor(v, tam);

    for (int i = 0; i < tam; i++)
    {
        printf("%d\n", v[i]);
    }

    free(v);
}