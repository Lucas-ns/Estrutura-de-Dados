#include <stdio.h>

int main()
{
    int a[10], b[10], c[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor para o primeiro vetor: ");
        scanf("%d", &a[i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor para o segundo vetor: ");
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        c[i] = a[i] * b[i];
        printf("%d * %d = %d\n",a[i], b[i], c[i]);
    }
    return 0;
}