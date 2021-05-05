#include <stdio.h>

int main(){
    int a[10], b[10], c[20], i;

    for (i = 0; i < 10; i++)
    {
        printf("Valor para o primeiro vetor: ");
        scanf("%d", &a[i]);
    }

    printf("\n");

    for (i = 0; i < 10; i++)
    {
        printf("Valor para o segundo vetor: ");
        scanf("%d", &b[i]);
    }
    for (i = 0; i < 20; i++)
    {
        c[i] = a[i];
        
        printf("%d, ", c[i]);
    }
    
    
}   