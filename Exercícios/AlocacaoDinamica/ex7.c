#include <stdio.h>
#include <stdlib.h>

typedef struct hidrocarboneto{
    int C, H;
}Hidrocarboneto;

void ler_massa_atomica(Hidrocarboneto *p){
    int massa_atomica = 0;
    printf("Digite a quantidade de moléculas do carbono: ");
    scanf("%d", &p->C);
    printf("Digite a quantidade de moléculas do hidrogênio: ");
    scanf("%d", &p->H);
}

void imprimir_massa_atomica(Hidrocarboneto *p){
    printf("C%d", p->C);
    printf("H%d\n", p->H);
    printf("A massa atômica do elemento acima é de %du.\n", p->C*12+p->H*1);
}

int main(){
    Hidrocarboneto *p = (Hidrocarboneto*)malloc(sizeof(Hidrocarboneto));
    ler_massa_atomica(p);
    imprimir_massa_atomica(p);
    free(p);
}