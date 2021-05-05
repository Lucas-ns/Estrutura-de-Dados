#include <stdio.h>

int vetor[10];

int preencherVetor()
{

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }
    return 0;
}

int imprimirVetor()
{
    printf("Vetor digitado: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d..", vetor[i]);
    }
    return 0;
}

int inverterVetor()
{
    int vetorInvertido[10];

    printf("\nInvertendo o Vetor: ");
    for (int i = 0; i < 10; i++)
    {
        vetorInvertido[i] = vetor[10 - i - 1];
        printf("%d..", vetorInvertido[i]);
    }
    return 0;
}

int main()
{
    preencherVetor();
    imprimirVetor();
    inverterVetor();
}