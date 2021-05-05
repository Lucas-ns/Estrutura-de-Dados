#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam;
    printf("Digite o tamanho desejado: ");
    scanf("%d", &tam);
    int *v = (int *)malloc(tam*sizeof(int));
    int soma = 0;

    for (int i = 0; i < tam; i++)
    {
        v[i] = i;
        printf("%d\n", v[i]);
        if (v[i] % 2 == 1)
        {
            soma += v[i];
        }
    }
    printf("A soma dos valores ímpares é: %d\n", soma);

    free(v);
}