#include <stdio.h>

int main(){
    int n1 = 0, razao = 0, vetor[10];

    printf("Início da P.A.: ");
    scanf("%d", &n1);
    printf("Razão da P.A.: ");
    scanf("%d", &razao);

    for (int i = 0; i < 10; i++)
    {
        vetor[i] = n1;
        n1 += razao;
        printf("%d\n", vetor[i]);
    }
    return printf("Valores adicionados com sucesso!\n");
    
}