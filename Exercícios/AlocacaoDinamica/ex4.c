#include <stdio.h>
#include <stdlib.h>

int *retorna_ponteiro(int tam)
{
    int *v = (int *)malloc(tam * sizeof(int));

    return v;
}

void imprimir_vetor(int *v, int tam)
{
    printf("Os valores são:\n");
    for (int i = 0; i < tam; i++)
    {
        printf("%d\n", v[i]);
    }
}

void liberar_memoria(int *v)
{
    free(v);
}

int main()
{
    int tam, *v;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    v = retorna_ponteiro(tam);

    for (int i = 0; i < tam; i++)
    {
        printf("Valor para a posição %d: ", i);
        scanf("%d", &v[i]);
    }
    
    imprimir_vetor(v, tam);
    liberar_memoria(v);
}